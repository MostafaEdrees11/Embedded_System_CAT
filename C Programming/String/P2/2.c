#include <stdio.h>
#include <string.h>

/*
* Author: Mostafa Edrees
* Date: 21/02/2023
* Required: Write a C program to count total number of alphabets, digits or special characters in 
			a string using loop.
*/

void calc(char *s, int length);

int main()
{
	char string[50];
	int len;
	
	printf("Enter a string: ");
	gets(string);
	
	len = strlen(string);
	
	calc(string,len);
	
	return 0;
}

void calc(char *s, int length)
{
	int alphabets_count = 0, digits_count = 0, special_characters_count = 0;
	
	for(int i = 0; i < length; i++)
	{
		if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			alphabets_count++;
		else if((s[i] >= '0' && s[i] <= '9'))
			digits_count++;
		else
			special_characters_count++;
	}
	
	printf("\nThe string: \"%s\" has \n",s);
	printf("%d alphabets \n%d digits \n%d special characters\n",alphabets_count ,digits_count ,special_characters_count);
}