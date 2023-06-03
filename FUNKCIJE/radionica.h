#pragma once
#include "helper.h"


void RobotLine::radionica() {
  
    static int t=0;
    static int h=0;
 
  if (line(7) and line(1)) {
    go(-90, 90);
    delayMs(600);
    go(90, 90);
    delayMs(1000);
    
  }
  if(not lineAny()){
    t=t+1;
  }
  if(not lineAny() and t > 5){
    h=h+1;
  }  
  else{
    pratiLiniju();
  }
}
