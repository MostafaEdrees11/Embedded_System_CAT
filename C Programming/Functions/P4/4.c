#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Task : login code by using function
*/


/*the index of username & password are the same in two arrays
ex: Mostafa --> 1111          Anas --> 3333  */
char names[5][10] = {"Mostafa" , "Mohamed" , "Anas" , "Ali" , "Ahmed"};
int passwords[5] = {1111 , 2222 , 3333 , 4444 , 5555};

//functions prototypes
void login(void);
void check_password(int x);

int main()
{
	char run_again;
	
	//infinte loop until the user end the program
	do
	{
		login();
		
		printf("\nDo You want to run again?\n");
		printf("1 --> Yes\n");
		printf("2 --> No\n");
		printf("You choose : ");
		scanf("%d",&run_again);
		fflush(stdin); fflush(stdout);
		
	}while(run_again==1);
	
	return 0;
}

void login(void)
{
	int i;
	char user_name[10];
	
	//take username from user
	printf("\nEnter username : ");
	gets(user_name);
	
	for(i = 0; i < 5; i++)
	{
		//check the entered username that is exist or not
		if(strcmp(user_name , names[i]) == 0)
		{
			//if username exist then we check password
			check_password(i);
			break;
		}
	}
	
	//if username does not exist
	if(i == 5)
		printf("This username is not exist\n");
	
}

void check_password(int x)
{
	int password , i;
	
	for(i = 0; i < 3; i++)
	{
		//take password from user
		printf("Enter Password : ");
		scanf("%d",&password);
		
		//check the entered password
		if(password == passwords[x])
		{
			//if password is true
			printf("***************\n");
			printf("Welcome %s\n",names[x]);
			printf("***************\n");
			break;
		}
		else
		{
			//if password is false
			printf("-----------------\n");
			printf("Wrong password !!\n");
			printf("-----------------\n");
		}
		
		
	}
	
	//if we enter password wrong for 3 times
	if(i == 3)
		printf("No more tries\n");
	
}