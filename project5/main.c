#include "lm4f120h5qr.h"

void delay(void);

int main() {
  // Enable GPIOF
  SYSCTL_RCGCGPIO_R = 0x20U;
  
  // GPIOF Pin Direction
  GPIO_PORTF_DIR_R = 0x0EU;
  
  // GPIOE Config
  GPIO_PORTF_DEN_R = 0x0EU;
  
  while (1) {
    GPIO_PORTF_DATA_R = 0x02U; // GPIOF LED RED ON 
    delay();
    GPIO_PORTF_DATA_R = 0x00U; // GPIOF LED RED OFF
    delay();
  }
  return 0;
}

void delay(void) {
  int volatile delay_cnt = 0;
  while (delay_cnt++ < 1000000) {}
}