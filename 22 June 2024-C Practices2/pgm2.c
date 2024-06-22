#include<stdio.h>
int main()
{
	int monthnum;
	printf("Enter the number::");
	scanf("%d",&monthnum);
	
	if(monthnum==1)
	printf("31 days");
	else if(monthnum==2)
	printf("28/29 days");
	else if(monthnum==3)
	printf("31");
	else if(monthnum==4)
	printf("30");
	else if(monthnum==5)
	printf("31");
	else if(monthnum==6)
	printf("31");
	else if(monthnum==7)
	printf("30");
	else if(monthnum==8)
	printf("31");
	else if(monthnum==9)
	printf("30");
	else if(monthnum==10)
	printf("31");
	else if(monthnum==11)
	printf("30");
	else if(monthnum==12)
	printf("30");
	else
	printf("Invalid");
}
