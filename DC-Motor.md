# DC-Motor  

マブチモータを買った。  
品番はこれ、RE-280RA。値段は200円くらい。  
[https://www.mabuchi-motor.co.jp/motorize/branch/motor/](https://www.mabuchi-motor.co.jp/motorize/branch/motor/)  

適正電圧が、3V なので、Arduino から出せる。楽。  
ステッピングモータの 24V とか必要になったら、電源系作る必要があるので、面倒臭い。  


---  


### DC モータの特性  

>(1)起動トルクが大きい
(2)印加電圧に対し回転特性が直線的に比例する
(3)入力電流に対し出力トルクが直線的に比例し、かつ出力効率が良い
(4)低価格

>(1)T-I特性（トルク対電流）
流した電流に対して、きれいに直線的にトルクが比例する。
つまり大きな力が必要なときは電流を沢山流せば良いという
ことになります。
(2)T-N特性（トルク対回転数）
トルクに対し回転数は直線的に反比例する。
これによれば、重いものをまわす時はゆっくり回るという
ことで、これを早くまわすには電流を沢山流すことが必要
ということになります。


[http://www.picfun.com/motor01.html](http://www.picfun.com/motor01.html)  

