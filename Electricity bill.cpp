#include<stdio.h>
main()
{
	int a,b;
	printf("enter the number of units");
	scanf("%d",&a);
	if(a<=50)
	{
	bill=a*1;
	printf("electricity bill is %d", bill);}
	
else if (a>=51 && a<=100){
	bill=(a-50) + (50*1);
	printf("electricity bill is %d", bill);
}
	}
	
}
