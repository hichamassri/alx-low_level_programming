#include <stdio.h>

/**
 * The main function of the program.
 * It demonstrates a magic trick by indirectly modifying a[2] to be 98.
 * Prints the value of a[2] before and after the modification.
 */
int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;
    /*
     * Write your line of code here...
     * Remember:
     * - You are not allowed to use 'a'
     * - You are not allowed to modify 'p'
     * - Only one statement
     * - You are not allowed to code anything else than this line of code
     */
    printf("a[2] = %d\n", *(p + 7));
    *(p + 5) = 98; /* Indirectly modify a[2] to be 98 */
    /* ...so that this prints 98\n */
    printf("a[2] = %d\n", a[2]);
    return 0;
}
