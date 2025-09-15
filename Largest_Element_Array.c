//Largest element in an array
#include<stdio.h>
int main()
{
	int array[100];
	int n,large,i;
	printf("Ennter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Entered Array =");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	printf("]\n");
	printf("The largest element of this array is: ");
	large=array[0];
	for(i=0;i<n;i++)
	{
		if(array[i]>large)
		{
			large=array[i];
		}
	}
	printf("%d",large);
	return 0;
}
