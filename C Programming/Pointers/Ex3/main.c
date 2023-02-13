/*
 * Author: Mostafa Edrees
 * Date: 13/02/2023
 * Required: Write a C code that defines 2 arrays, and sends them to a function that applies scalar
             multiplication between the two arrays and returns the result, the main function then
             will print the result.
 */
#include <stdio.h>

/* Macros for size of arrays */
#define N 5

/* function prototype */
int Calc_Scalar_Multiplication(int *a, int *b);

int main( )
{
    /* define two arrays */
    int arr1[N], arr2[N];

    /* two pointers to scan values of two arrays */
    int *p , *q;

    /* get the elements of first array from the user */
    printf("\nEnter the elements of 1st array:");
    for(p = arr1; p < arr1+N; p++)
        scanf("%d",p);

    /* get the elements of second array from the user */
    printf("Enter the elements of 2nd array:");
    for(q = arr2; q < arr2+N; q++)
        scanf("%d",q);

    /* define a variable for the scalar multiplication of two arrays */
    int scalar_multiplication;

    /* call the function */
    scalar_multiplication = Calc_Scalar_Multiplication(arr1,arr2);

    /* print the value of scalar multiplication */
    printf("\nScalar Multiplication = %d\n",scalar_multiplication);

    return 0;
}

/*
------------------------------------------------------------------------------------------------
                            Function Definition
------------------------------------------------------------------------------------------------
Name: Calc_Scalar_Multiplication
Usage: it takes two pointers for two arrays and return the scalar multiplication of two arrays
------------------------------------------------------------------------------------------------
 */
int Calc_Scalar_Multiplication(int *a, int *b)
{
    int result = 0;

    for(int i = 0; i < N; i++)
        result += (a[i] * b[i]);

    return result;
}