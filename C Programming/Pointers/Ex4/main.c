/*
 * Author: Mostafa Edrees
 * Date: 13/02/2023
 * Required: Write a C code that defines a function which takes an array as input argument
             and apply the bubble sorting algorithm on it, then prints the result.
 */
#include <stdio.h>

/* Macros for array size */
#define N 5

/* functions prototype */
void Bubble_Sort_Algorithm(int *a);
void Print_Array(int *a);

int main()
{
    /* define an array */
    int arr[N];

    /* take the value of array elements from the user */
    printf("Enter the array elements:");
    for(int i = 0; i < N; i++)
        scanf("%d",&arr[i]);

    /* call the function and sort the array */
    Bubble_Sort_Algorithm(arr);

    return 0;
}

/*
--------------------------------------------------------------------
                        Function Definition
--------------------------------------------------------------------
Name: Bubble_Sort_Algorithm
Usage: it is used to sort the array by using bubble sort algorithm.
---------------------------------------------------------------------
 */
void Bubble_Sort_Algorithm(int *a)
{
    int temp;
    for(int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            /* swap the two values by using temp variable */
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    /* print the array after sort it */
    printf("\nArray after sorted: ");
    Print_Array(a);
}

/*
----------------------------------------------------
                Function Definition
----------------------------------------------------
Name: Print_Array
Usage: it is used to print the element of an array.
----------------------------------------------------
 */
void Print_Array(int *a)
{
    for(int i = 0; i < N; i++)
        printf("%d ",a[i]);
}