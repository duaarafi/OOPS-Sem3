//Calculator Using Switch

#include<stdio.h>
int main()
{
	float a,b;
	int option;
	
	printf("Enter first number: ");
	scanf("%f",&a);
	printf("Enter second number: ");
	scanf("%f",&b);
	
	printf("Choose from the following options the operation to be performed: \n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			{
				float sum;
				sum=a+b;
				printf("Sum = %f",sum);
				break;
			}
		case 2:
		{
				float diff;
				diff=a-b;
				printf("Difference = %f",diff);
				break;
		}
		case 3:
		{
				float mul;
				mul=a*b;
				printf("Product = %f",mul);
				break;
			}
		case 4:
			{
				float div;
				div=a/b;
				printf("Quotient = %f",div);
				break;
			}	
	}
	return 0;
}
