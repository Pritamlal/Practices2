#include<stdio.h>
int main()
{
	int mark1,mark2,mark3,mark4,mark5;
	printf("Enter Five marks::");
	scanf("%d\n%d\n%d\n%d\n%d",&mark1,&mark2,&mark3,&mark4,&mark5);
	int avgmark = (mark1+mark2+mark3+mark4+mark5)/5;
	printf("AvgMark:%d\n",avgmark);
	
	if(avgmark > 90)
	printf("Grade A");
	else if(avgmark > 80)
	printf("Grade B");
	else if(avgmark > 70)
	printf("Grade C");
	else if(avgmark > 60)
	printf("Grade D");
	else if(avgmark > 50)
	printf("Grade E");
	else 
	printf("FAIL");	
}
