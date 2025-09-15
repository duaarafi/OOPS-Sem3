//Simple Marks System.
#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5;
	
	printf("Enter marks of subject 1: ");
	scanf("%f",&sub1);
	printf("Enter marks of subject 2: ");
	scanf("%f",&sub2);
	printf("Enter marks of subject 3: ");
	scanf("%f",&sub3);
	printf("Enter marks of subject 4: ");
	scanf("%f",&sub4);
	printf("Enter marks of subject 5: ");
	scanf("%f",&sub5);
	
	printf("Total marks scored: ");
	float total=sub1+sub2+sub3+sub4+sub5;
	printf("%f\n",total);
	
	printf("Average scored: ");
	float avg=(sub1+sub2+sub3+sub4+sub5)/5;
	printf("%f\n",avg);
	
	printf("Percentage: ");
	float per=((sub1+sub2+sub3+sub4+sub5)/500)*100;
	printf("%f%\n",per);
	
	if(per>=90)
	{
		printf("Grade: A");
	}
	if(per>=80 && 	per<=89)
	{
		printf("Grade: B");
	}
	if(per>=70 && 	per<=79)
	{
	printf("Grade: C");
	}
	if(per>=60 && 	per<=69)
	{
	printf("Grade: D");
	}
	if(per>=50 && 	per<=59)
	{
	printf("Grade: E");
	}
	if(per==0 && 	per<=49)
	{
	printf("Grade: F");
	}
	
	return 0;


	
}
