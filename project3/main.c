
int counter = 0;

int main() {
  int *p_int;
  p_int = &counter;
  
  // & Gives the address of the variable
  // * Asks for the value a the address the pointer points to
  
  while (*p_int < 21) {
    (*p_int)++;
  }
  
  // Typecast to force the pointer to an address
  p_int = (int *)0x20000002U;
  *p_int = 0xDEADBEEF;
  
  return 0;
}
