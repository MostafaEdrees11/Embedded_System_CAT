/*
 * Author: Mostafa Edrees
 * Date: 13/02/2023
 * Required: Write a C code that asks the user to enter 2 values and save them in two variables, then
             the program sends these variables by address to a function that returns the summation of
             them. The program then prints the result.
 */
#include <stdio.h>

/* function prototype */
int Sum_Two_Numbers(int *a, int *b);

int main()
{
    /* define 3 variables --> two for the numbers and one for the sum */
    int num1, num2, sum;

    /* get the first number from the user */
    printf("Enter the 1st number: ");
    scanf("%d",&num1);

    /* get the second number from the user */
    printf("Enter the 2nd number: ");
    scanf("%d",&num2);

    /* call the function */
    sum = Sum_Two_Numbers(&num1,&num2);

    /* print the summation value */
    printf("%d + %d = %d\n",num1 ,num2 ,sum);

    return 0;
}
/*
------------------------------------------------------------------------------
            Function Definition
------------------------------------------------------------------------------
Name: Sum_Two_Numbers
Usage: it takes two pointers for two numbers and return the sum of two numbers
-------------------------------------------------------------------------------
 */
int Sum_Two_Numbers(int *a, int *b)
{
    return *a + *b;
}