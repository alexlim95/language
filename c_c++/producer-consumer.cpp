/**
 * Can result in data races.
 */

// producer
while(true)
{
  /* produce an item in next produced */
  while (counter == BUFFER_SIZE); /* do nothing; full */
  buffer[in] = next_produced;
  in = (in + 1) % BUFFER_SIZE;
  counter++;
}

// consumer
while(true)
{
  while (counter == 0); /* do nothing; empty */
  next_consumed = buffer[out];
  out = (out + 1) % BUFFER_SIZE;
  counter--;
  /* consume the item in next consumed */
}
