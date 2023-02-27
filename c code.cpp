#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char name[10];
	int ch;
	do{
	
	printf("-------------------BIRTHDAY LIST APPLICATION-----------------------");
	printf("\n\tName\t\t\tDOB\t\t");
	printf("\n\tShravani\t\tDec 08,2002");
	printf("\n\tVishakha\t\tMar 20,2002");			
	printf("\n\tParvati\t\t\tNov 02,2002");
	printf("\n\tYash\t\t\tAug 28,2001");
	printf("\n\tRohan\t\t\tJul 20,2002");
	printf("\n--------------------------------------------------------------------");
	printf("\n1-Shravani\n2-Vishakha\n3-Parvati\n4-Yash\n5-Rohan");
	printf("\nEnter your choice :");
	scanf("%d",&ch);
	printf("\n--------------------------------------------------------------------");
	
	switch(ch)
	{
		case 1:
			printf("\nHappy Birthday Shravani");
			printf("\nDec 08,2002");
			printf("\nkulkarnishravani08@gmail.com");
			break;
		case 2:
			printf("\nHappy Birthday Vishakha");
			printf("\nMar 20,2002");
			printf("\nvishakhasonar20@gmail.com");
			break;
		case 3:
			printf("\nHappy Birthday Parvati");
			printf("\nNov 02,2002");
			printf("\nparvatikhokle02@gmail.com");
			break;
		case 4:
			printf("\nHappy Birthday Yash");
			printf("\nAug 28,2002");
			printf("\nyashbari28@gmail.com");
			break;
		case 5:
			printf("\nHappy Birthday Rohan");
			printf("\nJul 20,2002");
			printf("\nrohanchougule20@gmail.com");
			break;
		default:
			printf("\ninvalid choice..");
	}
	printf("\nDo you want to continue press 9");
	scanf("%d",&ch);
	} while(ch==9);
	printf("\n-----------------THANK YOU-----------------------");
	return 0;
}