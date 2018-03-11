// to find the midpoint, must use two pointers
// for merged sort for linked list-based lists

template <class Type>
void unorderedLinkedList<Type>::divideList(nodeType<Type> *first1, nodeType<Type>* &first2)
{
  nodeType<Type> *middle, *current;               // declare pointers
  if (first1 == NULL) first2 = NULL;              // list is empty
  else if (first1->link == NULL) first2 = NULL;   // list has only one node
  else  // list has at least two nodes
  {
    middle = first1;          // set middle to first1 (head)
    current = first1->link;   // current is next node

    // if link has more than two nodes, advance current by one node (third node)
    if (current != NULL) current = current->link;

    while (current != NULL)
    {
      middle = middle->link;                // advance middle by one
      current = current->link;              // advance current by one node
      if (current != NULL) current->link;   // advance current by one more node
    } // end while

    first2 = middle->link;    // first2 points to first node of second sublist
    middle->link = NULL;      // set link of last node of first sublist to NULL
  } // end else
} // end divideList

template <class Type>
nodeype<Type>* unorderedLinkedList<Type>::mergeList(nodeType<Type>* first1, nodeType<Type>* first2)
{
  nodeType<Type> *lastSmall;  // pointers to the last node of the merged lists
  nodeType<Type> *newHead;    // pointer to the merged lists

  if (first1 == NULL) return first2;      // first sublist is empty
  else if (first2 == NULL) return first1; // second sublist is empty
  else
  {
    if (first1->info < first2->info)  // compare the first nodes
    {
      newHead = first1;
      first1 = first1->link;
      lastSmall = newHead;
    }
    else
    {
      newHead = first2;
      first2 = first2->link;
      lastSmall = newHead;
    }

    while (first != NULL && first2 != NULL)
    {
      if (first1->info < first2->info)
      {
        lastSmall->link = first1;
        lastSmall = lastSmall->link;
        first1 = first1->link;
      }
      else
      {
        lastSmall->link = first2;
        lastSmall = lastSmall->link;
        first2 = first2->link;
      }
    } // end while

    if (first1 == NULL) lastSmall->link = first2; // first sublist exhausted first
    else lastSmall->link = first1;                // second sublist exhausted first
    return newHead;
  } // end else
} // end mergeList

// recursive mergesort function
template <class Type>
void unorderedLinkedList<Type>::recMergeSort(nodeType<Type>* &head)
{
  nodeType<Type> *otherHead;

  if (head != NULL)   // if the list is not empty
  {
    if (head->link != NULL)   // if the list has more than one node
    {
      divideList(head, otherHead);
      recMergeSort(head);
      recMergeSort(otherHead);
      head = mergeList(head, otherHead);
    }
  }
} // end recMergeSort
