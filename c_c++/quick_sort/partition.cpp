template <class elemType>
int arrayListType<elemType>::partition(int first, int last)
{
  // declare variables
  elemType pivot;
  int index, smallIndex;

  // swap first and middle element (pivot)
  swap(first, (first + last) / 2);

  pivot = list[first];      // pivot is now first element
  smallIndex = first;       // assign first element to be smallIndex

  // loop from second element to last element
  for (index = first + 1; index <= last; index++)
  {
    // if element is less than pivot --> assign to lower sublist
    if(list[index] < pivot)
    {
      smallIndex++;             // advance smallIndex
      swap(smallIndex, index);  // swap list[smallIndex] and list[index]
    }
  }
  swap(first, smallIndex);      // swap list[first] (pivot) and list[smallIndex]
  return smallIndex;            // pivot location --> for start/end of sublists
}
