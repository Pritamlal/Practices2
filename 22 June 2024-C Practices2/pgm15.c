#include<stdio.h>
int main()
{
	float num1,num2;
	char op;
	printf("Enter the number::");
	scanf("%f %f",&num1,&num2);
	
	printf("Enter the Operator::");
	scanf(" %c",&op);
	
	switch(op)
	{
		case '+':
			printf("The sum is %.2f",num1+num2);
			break;
		case '-':
			printf("The Diff is %.2f",num1-num2);
			break;
		case '*':
			printf("The Multiply is %.2f",num1*num2);
			break;
		case '/':
			printf("The Division is %.2f",num1/num2);
			break;
		default:
			printf("Invalid");
			
	}
	
}
