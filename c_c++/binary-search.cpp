int binary_search(int array_list[], int value, int length)
{
  // get the mid point of the list
  int first = 0;
  int last = length - 1;
  int mid;
  bool found = false;

  while (first <= last && !found)
  {
    mid = (first + last) / 2;

    if (array_list[mid] == value) found = true;
    else if (value < array_list[mid]) last = mid - 1;
    else first = mid;
  }

  if (found) return mid;
  else return -1;
}
