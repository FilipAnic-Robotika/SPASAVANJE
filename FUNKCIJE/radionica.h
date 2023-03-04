 #pragma once
 #include "helper.h"


void RobotLine::radionica()
{
if(setup()){
  armOpen();
}
pratiLinijuBrzo();

if (leftFront(3) < 200){

  go((-50), 50);
  delayMs(1000);
  armClose();
  stop();
  end();
}
}
