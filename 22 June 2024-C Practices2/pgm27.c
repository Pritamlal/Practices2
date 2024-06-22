#include<stdio.h>
int main()
{
	int num;
	long long int sum=1;
	printf("Enter the number::");
	scanf("%d",&num);
	while(num!=0)
	{
		sum=sum*(num%10);
		num=num/10;
	}
	printf("The sum is %lld",sum);
}
