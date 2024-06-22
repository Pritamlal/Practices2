#include<stdio.h>
int main()
{
	int amt1,amt2;
	printf("Enter the amount:::");
	scanf("%d %d",&amt1,&amt2);
	
	if(amt1>amt2){
		printf("Profit:%d",amt1-amt2);
	}
	else
	printf("Loss:%d",amt2-amt1);
}
