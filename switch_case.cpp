#include<stdio.h>
#include<conio.h>

int main()
{
	int w;
	printf("1=0-40 \n");
	printf("2=40-80 \n");
	printf("3=80-100 \n");
	printf("4=>100 \n");
	printf("Enter your choice : ");
	scanf("%d",&w);
	switch(w)
	{
		case 1:
			 	printf("\n Slow speed");
			 	break;
		case 2:
				printf("\n Average speed");
				break;
		case 3: 
				printf("\n Fast speed");
				break;
		case 4:
				printf("\n Danger, slow down!");
				break;
		default:
				printf("\n Invalid choice");
	}
}
