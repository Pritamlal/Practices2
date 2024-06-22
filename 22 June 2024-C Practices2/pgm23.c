#include<stdio.h>
int main()
{
	int lastd,firstd,num;
	printf("Enter the number::");
	scanf("%d",&num);
	lastd=num%10;
	while(num>=10)
	{
		num=num/10;
		
	}
	printf("The first digit is %d\n",num);
	printf("The lAst digit is %d",lastd);
	
}
