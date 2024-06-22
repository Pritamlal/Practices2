#include<stdio.h>
int main()
{
	int i,sum,num;
	printf("Enter the number::");
	scanf("%d",&num);
	for(i=2;i<=num;i+=2)

	{
	sum=sum+i;
	}
	printf("%d ",sum);

}
