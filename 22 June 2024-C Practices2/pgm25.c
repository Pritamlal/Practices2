#include<stdio.h>
int main()
{
	int lastd,num,firstd,digits,swappedNum;
	printf("Enter the number::");
	scanf("%d",&num);
	lastd = num%10;
	digits=(int) log10(num);
	firstd=(int) (num/pow(10,digits));
	
	swappedNum  = lastd;
    swappedNum *= (int) round(pow(10, digits));
    swappedNum += num % ((int)round(pow(10, digits)));
    swappedNum -= lastd;
    swappedNum += firstd;
    
    printf("the num is %d\n",num);
    printf("Number after Swapping is:%d",swappedNum);
	
}
