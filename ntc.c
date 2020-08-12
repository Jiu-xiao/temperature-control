//数据读取端口为A0，1端口用作VDD
#include "Arduino.h"
const float vdd=5.12;//设置基准电压（伏特）
const float mode=0;//0为变阻器接电源，1为NTC接电源
const float r=1.986;//设置变阻器（k欧姆）
const float a1=10.259;//定义回归曲线系数
const float b1=-0.044;
const float c1=10;
const float a2=2.6046;
const float b2=-0.037;
const float c2=40;
const float a3=0.86449;
const float b3=-0.031;
const float c3=70;
float ntc;
float t;
float getdata(float a,float b);
float analysis(float a,float b,float c,float d);
//------------------------------------------------------------------------------------
float getdata(float a,float b){
  if(b==1){
  float data=analogRead(A0);
  return a*(data/(1024-data));
  }
  else {
    float data=analogRead(A0);
    return a*((1024-data)/data);
    }
  }

float analysis(float a,float b,float c,float d){
  return (log(d/a))/b+c;
  }
