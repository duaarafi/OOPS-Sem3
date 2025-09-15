//Factorial Of a Number
#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter the number whose factorial need to be found: ");
	scanf("%d",&n);
	
	for(i=1;i<n+1;i++)
	{
		fact=fact*i;
	}
	printf("Factorial = %d ",fact);
	return 0;
}
