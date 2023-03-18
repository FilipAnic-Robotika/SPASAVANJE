 #pragma once
 #include "helper.h"


void RobotLine::radionica(){
  static int t = 0;
if(t==2 and line(8)){
go (50, 50);
  delayMs(500);
  t=t+1;

}
if(t==3 and line(1) and line(7)){
go(50, -50);
  delayMs(2000);
  t=t+1;
}
if(t==4 and line(0)){
go(50, -50);
  delayMs(1000);
  t=t+1;
}
if (line(2) and line(6) and pitch()<3 and pitch()>-1 and (t==0 or t==1)){
go(-90, 90);
  delayMs(500);
  t = t+1;
}
if (pitch() < -10 and line(1) and line(7)) {
    go(50, 50);
    delayMs(500);
}
else if (pitch()<4 and pitch()>-4 and line(2) and line(6) and t==5) {
    go(50, 50);
    delayMs(1000);
}

if (front()<150 and front()>100 and t==2) {
    go(50, (-50));
    delayMs(800);
    go(50, 50);
    delayMs(1000);
    go((-50), 50);
    delayMs(800);
    go(50, 50);
    delayMs(1000);
    go(50, (-50));
    delayMs(800);
    go(50, 50);
    delayMs(1000);
    go((-50), 50);
    delayMs(800);

}

else{
  pratiLiniju();
}

  
char simbol[10 + sizeof(char)];
  sprintf(simbol,"%d",t);
  display(simbol);
}

