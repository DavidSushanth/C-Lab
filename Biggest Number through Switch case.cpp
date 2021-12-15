#include<stdio.h>
main()
{
	int a,b,c,k;
	printf("Enter the first Number\n");
	scanf("%d", &a);
	printf("Enter the second Number\n");
	scanf("%d", &b);
	printf("Enter the third Number\n");
	scanf("%d", &c);
	switch(a>b && a>c)
		{
		case 1: 
			printf("First Number is the Biggest %d",a);break;
			case 0:
		    	switch(b>a && b>c){
		    		case 1:printf("Second Number is the Biggest %d", b);break;
		    		case 0:printf("third Number is the Biggest %d", c);break;
				}
		}
}
