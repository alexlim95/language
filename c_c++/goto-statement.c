/* without goto statement */
long absdiff (long x, long y)
{
  long result;
  if (x > y) reslut = x - y;
  else result = y - x;
  return result;
}

/* using goto statement (same logic as assembly jumps) */
long absdiff_goto (long x, long y)
{
    long result;
    int test = x <= y;
    if (test) goto Else;
    result = x - y;
    goto Done;
  Else:
    result = y - x;
  Done:
    return result;
}
