/* function prototype */
int fun(int x, int *p);

/* declare and assign a pointer fp to this function */
(int) (*fp)(int, int *);
*fp = fun;

/* invoke fnuction using the declared pointer fp */
int y = 10;
int result = fp(3, &y);

/* The value of a function pointer is the address of the first instruction
*  of the macine-code representation of the function.
*/

/* Know the differences.
*
*  The first declaration int (*fp)(int, int *) is a declaration of a function
*  pointer with two arguments (integer and integer pointer) and returns an
*  integer value.
*
*  The second declaration int *fp(int, int *) is a function prototype which
*  takes two arguments (integer and interger pointer) and returns an interger
*  pointer.
*/
int (*fp)(int, int *);    // declaring function pointer (need parenthesis)

int *fp(int, int *);      // function prototype
