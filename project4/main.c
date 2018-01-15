int main() {
  // Enable GPIOF
  *((unsigned int *)0x400FE608U) = 0x20U;
  
  // GPIOF Pin Direction
  *((unsigned int *)0x40025400U) = 0x0EU;
  
  // GPIOE Config
  *((unsigned int *)0x4002551CU) = 0x0EU;
  
  while (1) {
    *((unsigned int *) 0x400253FCU) = 0x02U; // GPIOF LED RED ON 
    *((unsigned int *) 0x400253FCU) = 0x00U; // GPIOF LED RED ON 
  }
  return 0;
}
