//Calculate income tax

#include<iostream>
using namespace std;
int main()
{
	float sal;
    float tax;
	cout<<"Enter the anual income: ";
	cin>>sal;
	if(sal>=250001 && sal<=500000)
	{
		tax=sal*0.05;
		cout<<"Income Tax equals: "<<tax;
	}
	else if(sal>=500001 && sal<=1000000)
	{
		tax=sal*0.20;
		cout<<"Income Tax equals: "<<tax;
	}
	else if(sal>1000000)
	{
		tax=sal*0.30;
		cout<<"Income Tax equals: "<<tax;
	}
	else
	{
		cout<<"NO TAX";
	}
	return 0;
}
