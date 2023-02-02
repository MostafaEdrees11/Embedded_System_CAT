#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/*
Write a program in C to print all unique elements of an unsorted array.
The elements of the array entered by the user.
Ex:
The given array is : 1 5 8 5 7 3 2 4 1 6 2
Unique Elements in the given array are:
8 7 3 4 6
*/

void scan_array(int a[], int size);
void print_unique_elements(int a[], int size);

int main()
{
	int arr[30] , array_size;
	
	printf("Enter size of array: ");
	scanf("%d",&array_size);
	
	scan_array(arr,array_size);
	print_unique_elements(arr,array_size);
	
	return 0;
}

void scan_array(int a[], int size)
{
	printf("\nScanning elements of array\n");
	for(int i = 0; i < size; i++)
	{
		printf("Element %d = ",i+1);
		scanf("%d",&a[i]);
	}		
}


void print_unique_elements(int a[], int size)
{
	int counter;
	
	printf("\nUnique Elements: ");
	for(int i = 0; i < size; i++)
	{
		counter = 0;
		for(int j = 0; j < size; j++)
		{
			if(a[i] == a[j])
				counter++;
		}
		if(counter == 1)
			printf("%d ",a[i]);
	}
}