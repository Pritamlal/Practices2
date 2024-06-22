#include<stdio.h>
int main()
{
	int salary,hra,da;
	printf("Enter the salary::");
	scanf("%d",&salary);
	
	if(salary<=10000)
	{
		hra = salary*0.2;
		da  = salary*0.8;
		printf("Hra value is:%d\n",hra);
		printf("Da value is %d",da);
	}	
	else if(salary>=10000 && salary<=20000)
	{
		hra = salary*0.25;
		da  = salary*0.75;
		printf("Hra value is:%d\n",hra);
		printf("Da value is %d",da);
	}
	else if(salary>=20000 && salary<=30000)
	{
		hra = salary*0.30;
		da  = salary*0.65;
		printf("Hra value is:%d\n",hra);
		printf("Da value is %d",da);
	}
	else 
	{
		printf("Invalid");
	}
	
}
