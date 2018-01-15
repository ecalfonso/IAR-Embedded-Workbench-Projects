#include "delay.h"

void delay(int itr) {
  int volatile delay_cnt = 0;
  while (delay_cnt++ < itr) {}
}