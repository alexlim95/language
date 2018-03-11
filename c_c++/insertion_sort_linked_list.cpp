template <class elemType>
void unorderedLinkList<elemType>::linkedInsertionSort()
{
  // pointers to nodes in linked list
  nodeType<elemType> *lastInOrder;
  nodeType<elemType> *firstOutOfOrder;
  nodeType<elemType> *current;
  nodeType<elemType> *trailCurrent;

  lastInOrder = first;    // first element is the last in sorted order

  // empty list error
  if (first == NULL) cerr << "Cannot sort an empty list." << endl;
  // single element list
  else if (first->link == NULL)
  {
    cout << "The list is of length 1. It is already in order." << endl;
  }
  // multiple nodes in linked list
  else
  {
    // loop until reaches end of list
    while (lastInOrder->link != NULL)
    {
      firstOutOfOrder = lastInOrder->link;          // first unsorted

      // checks if node is less than first element of linked list
      if (firstOutOfOrder->info < first->info)
      {
        // update pointers
        lastInOrder->link = firstOutOfOrder->link;
        firstOutOfOrder->link = first;
        first = firstOutOfOrder;
      }

      // check if node should be sorted between two ordered nodes
      else
      {
        trailCurrent = first;       // set trailCurrent pointer to first
        current = first->link;      // set current to second node in list

        // iterate to find proper insertion point
        while (current->info < firstOutOfOrder->info)
        {
          // advance/iterator both pointers
          trailCurrent = current;
          current = current->link;
        }

        // checks if current pointer is not firstOutOfOrder
        if (current != firstOutOfOrder)
        {
          // update pointers
          lastInOrder->link = firstOutOfOrder->link;
          firstOutOfOrder->link = current;
          trailCurrent->link = firstOutOfOrder;
        }
        // firstOutOfOrder node is already in its proper position
        else lastInOrder = lastInOrder->link;
      }
    }
  } // end while
} // end linkedInsertionSort
