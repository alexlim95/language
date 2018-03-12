/*
*  Function to observe when compiling for IA32 and x86-64.
*
*  Compile with GCC:
*  IA32: unix> gcc -O1 -S -m32 fact-while.c -o fact-while-32.s -fomit-frame-pointer
*  x84-63: unix> gcc -O1 -S -m64 fact-while.c -o fact-while-64.s -fomit-frame-pointer
*/
int fact_while(int n)
{
  int result = 1;
  while (n > 1) {
    result *= n;
    n = n - 1;
  }
  return result;
}
