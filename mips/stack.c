/*
*  Demonstrates stack randomization on Linux machines.
*  Compile: gcc -o stack stack.c
*  Run: ./stack
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv)
{
  int local;
  printf("Address of local: %p\n", &local);
  return 0;
}
