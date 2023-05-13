/**
 ******************************************************************************
 * @file           : 8.c
 * @author         : Mostafa Edrees
 * @brief          : Write a C Program to Return multiple value from function-using pointers
 *					 Return minimum and maximum of the ARRAY
 * @date           : 13/5/2023
 ******************************************************************************
**/

#include <stdio.h>

void Max_Min_Value_Array(int arr[], int arr_size , int *pMax , int *pMin);

int main()
{
	int array[20], array_size;
	int max = 0,min = 0;
	
	printf("Enter size of array: ");
	scanf("%d",&array_size);
	
	printf("Enter %d elements in an array: ",array_size);
	for(int i = 0; i < array_size; i++)
		scanf("%d",&array[i]);
	
	Max_Min_Value_Array(array,array_size,&max,&min);
	
	printf("Maximum Element in array: %d\n",max);
	printf("Minimum Element in array: %d\n",min);
	
	return 0;
}

void Max_Min_Value_Array(int arr[], int arr_size , int *pMax , int *pMin)
{
	*pMax = arr[0];
	*pMin = arr[0];
	
	for(int i = 0; i < arr_size; i++)
	{
		if(*pMin >= arr[i])
			*pMin = arr[i];
		
		if(arr[i] >= *pMax)
			*pMax = arr[i];	
	}
}