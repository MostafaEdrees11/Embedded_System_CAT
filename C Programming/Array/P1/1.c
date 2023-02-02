#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/*
Write a program in C to sort elements of an array in ascending and descending order :
The User Enter 0 for ascending or Enter 1 for descending. The elements of the array
entered by the user.
*/


void scan_array(int a[], int size);
void print_array(int a[], int size);
void Asending_Sort(int a[], int size);
void Desending_Sort(int a[], int size);

int main()
{
	int arr[50], array_size, type_of_sort;
	
	printf("Enter size of array: ");
	scanf("%d",&array_size);
	
	scan_array(arr,array_size);
	
	printf("\nEnter Type of Sorting: \n");
	printf("0==>ascending\n");
	printf("1==>descending\n");
	scanf("%d",&type_of_sort);
	
	switch(type_of_sort)
	{
		case 1:
		Desending_Sort(arr,array_size);
		print_array(arr,array_size);
		break;
		
		case 0:
		Asending_Sort(arr,array_size);
		print_array(arr,array_size);
		break;
		
		default:
		printf("Wrong!!\n");
		break;
	}
	
	
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

void print_array(int a[], int size)
{
	printf("\nArray: ");
	for(int i = 0; i < size; i++)
	{
		printf("%d ",a[i]);
	}
}

void Asending_Sort(int a[], int size)
{
	int temp;
	for(int i = 0; i < size; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			if(a[j] < a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void Desending_Sort(int a[], int size)
{
	int temp;
	for(int i = 0; i < size; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			if(a[j] > a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}