template <class elemType>
void arrayListType<elemType>::recQuickSort(int first, int last)
{
  // declare variable
  int pivotLocation;

  if (first < last)
  {
    pivotLocation = partition(first, last);   // partition list into sublists
    recQuickSort(first, pivotLocation - 1);   // recursive quickSort (lower)
    recQuickSort(pivotLocation + 1, last);    // recursive quickSort (upper)
  }
}

template <class elemType>
void arrayListType<elemType>::quickSort()
{
  recQuickSort(0, length - 1);    // calls recQuickSort function for whole list
}
