 #pragma once
 #include "helper.h"


void RobotLine::radionica()
{
pratiLinijuBrzo();
if(front() < 100){

go((-50), 50);
  delayMs(1000);
  go(50, 50);
  delayMs(2000);
  go(50, (-50));
  delayMs(1000);
  go(50, 50);
  delayMs(2000);
  go(50, (-50));
  delayMs(1000);
  go(50, 50);
  delayMs(2000);
}
}
