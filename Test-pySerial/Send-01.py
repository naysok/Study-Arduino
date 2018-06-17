#coding:utf-8

#シリアル通信で文字をArduino側に送信
#aが押されたら通信を中止するプログラム

import serial   #モジュール名はpyserialだが, importする際はserialである

def main():
    with serial.Serial('/dev/tty.usbmodem1421',9600,timeout=1) as ser:
        while True:
            flag=bytes(input(),'utf-8')

            #シリアル通信で文字を送信する際は, byte文字列に変換する
            #input()する際の文字列はutf-8

            ser.write(flag)

            #シリアル通信:送信
            if(flag==bytes('s','utf-8')):
                print("LED : high")

            elif(flag==bytes('q','utf-8')):
                print("LED : low")

            elif(flag==bytes('a','utf-8')):
                break

        ser.close()

if __name__ == "__main__":
    main()