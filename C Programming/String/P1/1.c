#include <stdio.h>
#include <string.h>

/*
* Author: Mostafa Edrees
* Date: 21/02/2023
* Required: Write a C program to convert string from lowercase to uppercase string using loop.
*/

void convert_lower_to_upper(char *lowercase, int len);

int main()
{
	char lowercase_string[50];
	
	printf("Enter a string: ");
	gets(lowercase_string);
	
	int length = strlen(lowercase_string);
	
	convert_lower_to_upper(lowercase_string,length);
	
	return 0;
}

void convert_lower_to_upper(char *lowercase, int len)
{
	char uppercase_string[50];
	
	for(int i = 0; i < len; i++)
	{
		if(lowercase[i] == ' ')
		{
			uppercase_string[i] = lowercase[i];
			continue;
		}
		uppercase_string[i] = lowercase[i] - 32;
	}
	
	printf("lower case string: %s\n",lowercase);
	printf("upper case string: %s\n",uppercase_string);
}