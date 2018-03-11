template <class elemType>
void arrayListType<elemType>::swap(int first, int second)
{
  elemType temp;
  temp = list[first];
  list[first] = list[second];
  list[second] = temp;
} // end swap
