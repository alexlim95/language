/*
*  Function to observe when compiling for IA32 and x86-64.
*  
*  Using GCC:
*  Compile for IA32: unix> gcc -O1 -S -m32 fact-while.c -o fact-while-32 -fomit-frame-pointer
*  Compile for x86-64: unix> gcc -O1 -S -m64 fact-while.c -o fact-while-64 -fomit-frame-pointer
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
