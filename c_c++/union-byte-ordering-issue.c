/*
*  Using unions to combine data types of different sizes, byte-ordering
*  can become important (little-endian and big-endian). A procedure that
*  creates an 8-byte double using two 4-byte unsigned values is shown.
*
*  Little-endian machines (such as IA32):
*       - word0 will become low-order 4 bytes of d
*       - word1 will become high-order 4 bytes of d
*
*  On big-endian machines --> roles will be reversed
*/
double unsigned2double(unsigned word0, unsigned word1)
{
  union {
    double d;         // one 8-byte double
    unsigned u[2];    // two 4-byte unsigned
  } temp;

  temp.u[0] = word0;
  temp.u[1] = word1;
  return temp.d;
}
