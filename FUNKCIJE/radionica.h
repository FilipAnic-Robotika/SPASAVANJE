#pragma once
#include "helper.h"


void RobotLine::radionica() {
 /* static int t = 0;
  static int linija = 0;
   static int linija2 = 2;
  
  static int cunj = 0;

   if (linija2==2 and (not lineAny())){
   pratiDesniZid();
  }
  if ((t == 0) and line(8) and line(2) and pitch()<5 and pitch()> -5) {
    go(-90, 90);
    delayMs(500);
    t = t + 1;

  }
  if (t == 1 and line(6) and line(2)) {
    go(40, 40);
    delayMs(500);
    t = t + 1;

  }

  if (t == 2 and line(1) and line(7)) {
    go(50, -50);
    delayMs(2000);
    t = t + 1;

  }
  if (t == 3 and line(0)) {
    go(50, -50);
    delayMs(1000);
    t = t + 1;

  }

  if (not lineAny() and cunj == 0) {
    linija = linija + 1;
    if (linija >= 140){
      cunj = 1;
    }
  }
  if (frontLeft()<120 and linija2 == 2){
    go(60, -60);
    delayMs(500);
  }
  if (pitch()<10 and pitch()>5){
    linija2=2;
    go(60, 60);
    delayMs(2000);
    }
  if (pitch() < -10 and line(1) and line(7)) {
    go(50, 50);
    delayMs(500);
    linija2=2;
  }
  else if (pitch()<10 and t == 4) {
    go(60, 60);
    delayMs(2000);
    linija2=2;

  }
 
  
  
  if (front()<150 and front()>140 and t == 1 and linija >= 140 and cunj == 1) {

    go(50, (-50));
    delayMs(800);
    go(50, 50);
    delayMs(1000);
    go((-50), 50);
    delayMs(800);
    go(50, 50);
    delayMs(1500);
    go(-50, (50));
    delayMs(800);
    go(50, 50);
    delayMs(900);
    go((50), -50);
    delayMs(800);
    cunj = 2;
  }

  else {
    pratiLiniju();
  }

  char simbol[10 + sizeof(char)];
  sprintf(simbol, "%d", linija);
  display(simbol);*/
  pratiDesniZid();
}

