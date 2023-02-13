/*
 * Author: Mostafa Edrees
 * Date: 13/02/2023
 * Required: Write a C code defines an int initialized with 10, then print it,
             then define a pointer that points to that int and change the value
             of the int through the pointer to be 20, then print it again.
 */

#include <stdio.h>

int main()
{
    /* define an int variable and initialize it */
    int num = 10;
    /* print the variable */
    printf("num = %d\n",num);

    /* define a pointer and make it points to the variable */
    int *ptr;
    ptr = &num;

    /* change the value of the variable by using the pointer */
    *ptr = 20;
    /* print the variable after change its value*/
    printf("num after change its value by using pointer = %d\n",num);

    return 0;
}
