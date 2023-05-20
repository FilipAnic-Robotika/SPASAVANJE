#pragma once
#include "helper.h"


void RobotLine::radionica() {
  if (setup()) {
  }
  if (line(7) and line(1)) {
    stop();
    delayMs(500);
    go(-90, 90);
    delayMs(500);
  }
  lineFollow();
}
