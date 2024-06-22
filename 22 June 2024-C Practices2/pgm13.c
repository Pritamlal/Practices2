#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number::");
	scanf("%d",&num);
	
	switch(num>0)
	{
		case 1:
			printf("Positive Number");
			break;
		case 0:
			printf("Negative Number");
		default:
			printf("Zero number");
	}
}
