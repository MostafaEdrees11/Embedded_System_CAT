#include <stdio.h>
#include <string.h>

/*
* Author: Mostafa Edrees
* Date: 21/02/2023
* Required: Write a C program to input any string from user and find the first occurrence of a given character in the string. 
			Example:-
				Input string: I love Codeforwin.
				Input character to search: o
				Output
				'o' is found at index 3
*/

int find_first_occurance(char *s, char c, int len);

int main()
{
	char string[50], ch;
	int length, index;
	
	printf("Enter a string: ");
	gets(string);
	
	printf("Enter the character: ");
	scanf("%c",&ch);
	
	length = strlen(string);
	
	index = find_first_occurance(string,ch,length);
	
	printf("\'%c\' is found at index %d\n",ch ,index);
	
	
	return 0;
}

int find_first_occurance(char *s, char c, int len)
{
	int first_occurance;
	
	for(int i = 0; i < len; i++)
	{
		if(s[i] == c)
		{
			first_occurance = i;
			break;
		}
	}
	
	return first_occurance;
}