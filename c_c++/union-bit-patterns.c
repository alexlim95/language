#include <stdio.h>
#include <stdlib.h>

/*
*  Uses unions to access the bit patterns of different data types.
*  Returns bit representation of a float as an unsigned.
*/
unsigned float2bit(float f)
{
  union {
    float f;
    unsigned u;
  } temp;
  temp.f = f;
  return temp.u;
}
