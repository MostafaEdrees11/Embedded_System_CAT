#include <stdio.h>
#include <string.h>

/*
* Author: Mostafa Edrees
* Date: 21/02/2023
* Required: Write a C program to find reverse of a given string using loop. 
			How to find reverse of any given string using loop in C programming.
*/

void reverse_string(char *s, int len);

int main()
{
	char string[50];
	
	printf("Enter a string: ");
	gets(string);
	
	int length = strlen(string);
	
	reverse_string(string,length);
	
	return 0;
}

void reverse_string(char *s, int len)
{
	char reversed_string[50];
	int i, j = len-1;
	
	for(i = 0; i < len; i++)
	{
		reversed_string[i] = s[j];
		j--;
	}
	reversed_string[i] = '\0';
	
	printf("Origin string: %s\n",s);
	printf("Reversed string: %s\n",reversed_string);
}