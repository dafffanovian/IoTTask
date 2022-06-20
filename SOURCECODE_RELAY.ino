#include <M5Stack.h>
const int In_0 = 23;  //menunjuk ke bilangan bulat konstan
void setup() {        //menyediakan setting
// put your setup code here, to run once:
pinMode(In_0,OUTPUT); //mengatur mode dari digital sebgai input atau output
}
void loop() {         //melaksanakan atau mengeksekusi perintah dari program yang dibuat dan berjalan terus menerus selama board arduino aktif
// put your main code here, to run repeatedly:
digitalWrite(In_0, LOW);  //memberi nilai 1 atau 0 kepada pin digital yang ada pada arduino 
delay(1000);              //untuk menjeda program untuk waktu yang telah ditentukan dan 1000 dalam satuan ms dalam 1 detik
digitalWrite(In_0, HIGH); ////memberi nilai 1 atau 0 kepada pin digital yang ada pada arduino 
delay(1000);              //untuk menjeda program untuk waktu yang telah ditentukan dan 1000 dalam satuan ms dalam 1 detik
}
