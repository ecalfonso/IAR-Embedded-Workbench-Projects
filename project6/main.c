#include "lm4f120h5qr.h"

#define LED_RED         (1U << 1)
#define LED_BLUE        (1U << 2)
#define LED_GREEN       (1U << 3)

void delay(void);

int main() {
  // Enable GPIOF
  SYSCTL_RCGCGPIO_R |= (1U << 5);
  
  // GPIOF Pin Direction
  GPIO_PORTF_DIR_R |= (LED_RED | LED_BLUE | LED_GREEN);
  
  // GPIOE Config
  GPIO_PORTF_DEN_R |= (LED_RED | LED_BLUE | LED_GREEN);
  
  GPIO_PORTF_DATA_R = LED_BLUE; // GPIOF LED BLU ON
  while (1) {
    // GPIOF LED RED ON WHILE KEEPING BLU ON
    GPIO_PORTF_DATA_R |= LED_RED;  
    delay();
    
    // GPIOF LED RED OFF WHILE KEEPING BLU ON
    GPIO_PORTF_DATA_R &= ~LED_RED; 
    delay();
  }
  return 0;
}

void delay(void) {
  int volatile delay_cnt = 0;
  while (delay_cnt++ < 1000000) {}
}