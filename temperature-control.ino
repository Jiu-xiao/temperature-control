//数据读取端口为A0，1端口用作VDD

#include "init.h"
NTC N;
void setup(){
  Serial.begin(9600);
  N.Init();
  }
void loop() {
  N.GetData();
delay(1000);
}