#include<stdio.h>
main()
{
	int a;
	printf("Enter a Number");
	scanf("%d", &a);
	if(a%5==0 && a%11==0)
	{
		printf("The Number is divisible by both 5 and 11");
	}
	else if(a%11==0)
	{
		printf("The Number is divisible by 11");
	}
	else if(a%5==0)
	{
		printf("The Number is divisible by 5");
	}
	else
	{
		printf("The Number is nor divisible by 5 neither 11");
	}
}
