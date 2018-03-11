/**
 * Atomic operation.
 * compare_and_swap
 * Stores the original value in a temporary variable and checks if the value
 * is equal to the epected value and updates it to the new_value, then returns
 * the original value.
 */

int compare_and_swap(int *value, int expected, int new_value)
{
  int temp = *value;
  if (*value == expected) *value = new_value;
  return temp;
}

/**
 * Solution to critical section peoblem using compare_and_swap()
 */

do
{
    while (compare_and_swap(&lock, 0, 1) != 0);  // do nothing
    /* critical seciton */
    lock = 0;
    /* remainder section */
} while (true);
