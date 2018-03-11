template <class elemType>
void ArrayListType<elemType>::insertionSort()
{
  // declare variables
  int firstOutOfOrder, location;
  elemType temp;

  // start at second element to last element
  for (firstOutOfOrder = 1; firstOutOfOrder < length; firstOutOfOrder++)
  {
    // if current element is less than previous element
    if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
    {
      temp = list[firstOutOfOrder];   // store current element in temp
      location = firstOutOfOrder;     // initialize location

      // shift/copy element down the list and decrement location
      do
      {
        list[location] = list[location - 1];
        location--;
      } while(location > 0 && list[location - 1] > temp);

      list[location] = temp;    // insert temp into proper location
    }
  }
} // end insertionSort
