template <class elemType>
int arrayListType<elemType>::minlocation(int first, int last)
{
  int minIndex;
  minIndex = first;

  for(int loc = first + 1; loc <= last; loc++)
  {
    if(list[loc] < list[minIndex]) minIndex = loc;
  }
  return minIndex;
}
