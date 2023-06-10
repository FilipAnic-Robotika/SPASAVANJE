#pragma once
#include "helper.h"


void RobotLine::radionica() {
  
  static int r = 0;
  static int p = 0;

  if (line(7) and line(1) and r == 0) {
    p++;
    go(30, 30);
    delayMs(300);
    go(-90, 90);
    delayMs(600);

  }

  lineFollow();

}  
/*
  char simbol[10 + sizeof(char)];
  sprintf(simbol, "%d", ms);
  display (simbol);/*
  
