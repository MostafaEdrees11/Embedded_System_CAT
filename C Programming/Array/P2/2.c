#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/*
Write a program in C to find the second largest element in an array.
The elements of the array entered by the user.
*/

void scan_array(int a[], int size);
void sort_array(int a[], int size);
int second_largest_element(int a[]);

int main()
{
	int arr[30], array_size, second_largest;
	
	printf("Enter size of array: ");
	scanf("%d",&array_size);
	
	scan_array(arr,array_size);
	
	sort_array(arr,array_size);
	
	
	second_largest = second_largest_element(arr);
	
	printf("\n2nd largest element in array = %d",second_largest);
	
	
	
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

void sort_array(int a[], int size)
{
	int temp;
	
	for(int i = 0; i < size; i++)
	{
		for(int j = i+1; j < size;j++)
		{
			if(a[j] > a[i])
			{
				a[i] = temp;
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int second_largest_element(int a[])
{
	return a[1];
}