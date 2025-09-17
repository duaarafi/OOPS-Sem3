//Pattern Using Loop

#include<iostream>
using namespace std;
int main()
{
int i,k,j;
for(i=1;i<6;i++)
{

    for(k=1;k<=5-i;k++)
    {
    cout<<" ";
    }
    
	for(j=1;j<=i;j++)
	{
		cout<< j <<" ";
		
	}
	cout<<"\n";
}
return 0;
}
