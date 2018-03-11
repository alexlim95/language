template <class elemType>
void arrayListType<elemType>::selectionSort()
{
  int minIndex; // declares minIndex variable

  // loops through unsorted list
  for (int loc = 0; loc < length - 1; loc++)
  {
    minIndex = minLocation(loc, length - 1);  // gets index of minimum value
    swap(loc, minIndex);                      // swaps
  }
}
