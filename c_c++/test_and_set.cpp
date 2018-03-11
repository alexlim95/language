/**
 * Atomic operation.
 * Test and set process synchronization method passes a reference to a
 * lock, saves the original value, sets the lock to TRUE, and returns the
 * original value.
 */

bool test_and_set(bool *lock)
{
  bool rv = *lock;    // store the original value
  *lock = true;        // set the lock to TRUE
  return rv;          // return the original value
}

/**
 * Solution to critical section peoblem using test_and_set()
 */

do
{
    while (test_and_set(&lock));  // do nothing
    /* critical seciton */
    lock = false;
    /* remainder section */
} while (true);
