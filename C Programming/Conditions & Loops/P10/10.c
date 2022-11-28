/*
Write a C that asks the user to enter his ID and his password, if the ID is correct the
system will ask the user to enter his password up to 3 times, if he enters the password
right the system welcomes him, if the three times are incorrect, the system prints "No
more tries". The system prints "You are not registered" on every wrong try. (Login code)
*/
/*
id  --> pass --> name
100 --> 1111 --> Ahmed 
200 --> 2222 --> Mostafa
300 --> 3333 --> Anas
*/

#include <stdio.h>

void check_password(int password , char name[20]);

int main()
{
	int id;
	
	printf("Enter your id : ");
	scanf("%d",&id);
	
	switch(id)
	{
		case 100 :
		check_password(1111 , "Ahmed");
		break;
		
		case 200 :
		check_password(2222 , "Mostafa");
		break;
		
		case 300 :
		check_password(3333 , "Anas");
		break;
	}
	
	
	
	return 0;
}

void check_password(int password , char name[20])
{
	int entered_password , i;
	
	for(i = 0; i < 3; i++)
	{
		printf("Enter your password : ");
		scanf("%d",&entered_password);
		
		if(entered_password == password)
		{
			printf("Welcome %s\n",name);
			break;
		}
		printf("Wrong password\n");
	}
	if(i == 3)
	{
		printf("No more tries\n");
		printf("You are not registered\n");
	}	
}