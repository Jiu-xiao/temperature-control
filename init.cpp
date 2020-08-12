#include "init.h"
#include "ntc.c"
NTC::NTC() {
};
NTC::~NTC() {
};
void NTC::Init(void) {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(A0,INPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
};
float NTC::GetData(void) {
  float ntc=(vdd/5)*getdata(r,mode);
  if(ntc<=2.654)
  return analysis(a3,b3,c3,ntc);
  else if(ntc<=0.8772)
     return analysis(a2,b2,c2,ntc);
     else    return analysis(a1,b1,c1,ntc);
};
