#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=num;i<100;i+=2)
	{
		printf("%d,",i);
	}
}
