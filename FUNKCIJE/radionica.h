#pragma once
 #include "helper.h"


void RobotLine::radionica(){
  pratiLiniju();
if (pitch() < -10 and line(0) and line(8)) {
    go(50, 50);
    delayMs(500);
if (pitch() > 10 and line(0) and line(8)) {
    go(50, 50);
    delayMs(1000);

}
}
else if (line(2) and line(6)){
go(-90, 90);
  delayMs(500);

}

}
