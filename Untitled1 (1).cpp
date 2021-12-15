#include<stdio.h>
main()
{
	char c;
	printf("enter a character");
	scanf("%c", &c);
	switch(c>='a' && c<='z')
	{
		case 1:
			c=c-32;
			printf("the character converted %c", c); break;
			case 0:switch(c>='A' && c<='Z')
			{
				case 1:
						c=c-32;
						printf("the character converted %c", c); break;
	       		case 0:switch(c>='0'&& c<='9')
	       		{
	       			case 1:
	       				
	       				printf("the character entered is a number", c);break;
				default:
					 printf("the character is a special symbol");
					 }
	}
}}
