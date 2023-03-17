#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/*
Write a C code to find the repeating element in a given array through a function. The
function takes the array and returns the element.
ex: array--> 1 2 4 6 5 8 10 4 9 4
repeating element = 4
*/

void scan_array(int a[], int size);
int Find_Repeating_Element(int a[], int size);

int main()
{
	int arr[30], array_size , repeating_element;
	
	printf("Enter size of array: ");
	scanf("%d",&array_size);
	
	scan_array(arr,array_size);
	
	
	repeating_element = Find_Repeating_Element(arr,array_size);
	
	if(repeating_element == -1)
		printf("There is no repeating elemnts.\n");
	else
		printf("\nThe Repeating Element is %d\n",repeating_element);
	
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

int Find_Repeating_Element(int a[], int size)
{
	int counter;
	
	for(int i = 0; i < size; i++)
	{
		counter = 0;
		for(int j = 0; j < size; j++)
		{
			if(a[i] == a[j])
				counter++;
		}
		if(counter > 1)
			return a[i];
	}
	if(counter == 1)
		return -1;
}