#define _CRT_SECURE_NO_WARNINGS
#include"Sequential stack.h"
menu()
{
	printf("************0.Log Out***************************************\n");
	printf("************1.Decimal is converted to octal*****************\n");
    printf("************2.PushSequentialStack****************************\n");
	printf("************3.PopSequentialStack******************************\n");
	printf("************4.PrintfSequentialStack************************** *\n");


}


int main()
{
	int x;
	ST st;
	InitSequentialStack(&st);
	int input;
	do
	{
		menu();
		printf("Please enter your choice\n");
		scanf("%d", &input);
			switch (input)
			{


			case 0:
				printf("You are logged out\n");
				exit(0);

			case 1:
				printf("Please enter a positive decimal integer\n");
				scanf("%d", &x);
				DecimalIsConvertedToOctal(&st, x);
				break;

			case 2:
				printf("Enter the value of the element you want to stack\n");
				scanf("%d", &x);
				PushSequentialStack(&st,x);
				break;
			case 3:
				PopSequentialStack(&st);
				break;

			case 4:
				PrintfSequentialStack(&st);
				
				break;


			}
		 

	} while (input);
	



	return 0;




}