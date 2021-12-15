#include<stdio.h>
main()
{

	char a;
	int q,Bill,Price;
	printf("*****MENU*****\nb.Burger - Rs 200/-\nf.French Fries - Rs 50/-\np.Pizza - Rs 500/-\ns.Sandwich - Rs 550/-\n");
	scanf("%c", &a);
	switch(a)
{
	case 'b':
		printf("ordered Burger\n");
		printf("Enter Quantity\n");
		scanf("%d",&q);
		Bill=q*200;
		printf("Total Bill is %d", Bill);
	    break;
	case 'f':
		printf("ordered French Fries\n");
		printf("Enter Quantity\n");
		scanf("%d",&q);
		Bill=q*50;
		printf("Total Bill is %d",Bill);
	    break;
	case 'p':
		printf("ordered Pizza\n");
		printf("Enter Quantity\n");
		scanf("%d",&q);
		Bill=q*500;
		printf("Total Bill is %d",Bill);
	    break;
	case 's':
		printf("ordered Sandwich\n");
		printf("Enter Quantity\n");
		scanf("%d",&q);
		Bill=q*550;
		printf("Total Bill is %d",Bill);
	    break;
        default:;
		printf("Out of Order");
}

}
