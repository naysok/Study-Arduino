# Python-Arduino でのシリアル通信  

- Test-pySerial  
  - Test-Send  
    - Test-Send.ino  
  - Send-01.py // Python ←→ Arduino  


---  


Arduino ←→ Python  
シリアル通信には、pySerialを使う。  
（[https://pythonhosted.org/pyserial/](https://pythonhosted.org/pyserial/)）  

```
pip3 install pyserial
```


---  


### デバイス名  

Arduino では選べるが、python では手打ちする。  
macでデバイス名を調べる場合は、ターミナルで  
```
ls /dev/tty.*  
```
と入力してやれば、'/dev/tty.usbserial-*****'と表示されるので確認できる。  

screen コマンドでシリアル通信 for Mac & Linux(Qiita)  
[https://qiita.com/hideyuki/items/9258f33180d98ad0cb1e](https://qiita.com/hideyuki/items/9258f33180d98ad0cb1e)  


---  


### Python → Arduino  

(1) Arduino.app の IDE で、コンパイルして Arduino 本体に書き込む。そのあと、Arduino.app を終了する。  

(2) Send-01.py を実行すると、コマンドプロンプトの入力から、LED をつけたり消したりできる。  



---  


### Arduino → Python  

上の Python → Arduino の Send-01.py の中に、readline() 関数を追加した。  

Arduino のコードの、Serial.println(str) を受け取って、コマンドプロンプトで表示。  

```
b''
b'hello'
```
のかたちで返ってくるので、  
decode() で、デコードすると良さそう。  
```cpp
src_c = ser.readline()
c = src_c.decode("utf-8")
print(c)
```


---  


### Reference  

- PC-Arduino間 Python経由 シリアル通信備忘録（[https://qiita.com/Acqua_Alta/items/9f19afddc6db1e4d4286](https://qiita.com/Acqua_Alta/items/9f19afddc6db1e4d4286)）  
- Python3でArduinoからのデータを受信する（[http://k99-tech.com/blog/archives/826](http://k99-tech.com/blog/archives/826)）  
