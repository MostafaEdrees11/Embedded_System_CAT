/**
 ******************************************************************************
 * @file           : 7.c
 * @author         : Mostafa Edrees
 * @brief          : Write C Program to Copy String Without Using strcpy().
 * @date           : 13/5/2023
 ******************************************************************************
**/

#include <stdio.h>

int main()
{
	char My_Name[] = "Mostafa Edrees";
	char *pch = My_Name;
	
	char copied_string[30];
	int i = 0;
	
	while(*pch != '\0')
	{
		copied_string[i++] = *pch;
		pch++;
	}
	copied_string[i] = '\0';
	
	printf("Origin String: %s\n",My_Name);
	printf("Copied String: %s\n",copied_string);
	
	return 0;
}