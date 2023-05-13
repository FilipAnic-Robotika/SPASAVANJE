#pragma once
#include "helper.h"


void RobotLine::radionica() {

if(front()<130){
go(-50, 50);
delayMs(1200);
}
if(frontLeft()<150){
  go(-50, 50);
  delayMs(800);
  go(50, 40);
  delayMs(500);
  armClose();
  delayMs(800);
  go(60,-60);
  delayMs(1000);
}
if(line(0)){
  armOpen();
  go(-50, -50);
  delayMs(1000);
  go(-50, 50);
  delayMs(500);
  go(50,50);
  delayMs(1500);
  go(-50, 50);
  delayMs(800);
  go(50,50);
  delayMs(500);
  go(-50,50);
  delayMs(400);
}

else{
  pratiDesniZid();
}
}
