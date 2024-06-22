#include<stdio.h>
int main()
{
	int i,start,end;
	printf("Enter the start and end:::");
	scanf("%d %d",&start,&end);
	
	for(i=start;i<=end;i++)
	{
		printf("The value is %d\n",i);
	}
}
