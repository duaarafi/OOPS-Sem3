//CLASS SIMPLE INTEREST CALCULATOR

#include<iostream>
using namespace std;

class Interest
{
	private:
		
		float principal;
		float rate;
		float time;
	
	public:
		
		void setValues(float p, float r, float t)
		{
			cout<<"Enter principal: ";
			cin>>p;
			if(p>=0)
			{
				principal=p;
			}
			else
			{
				cout<<"Principal cannot be negative. INVALID!\n";
				p=0;
			}
			cout<<"Enter rate: ";
			cin>>r;
			if(r>=0)
			{
				rate=r;
			}
			else
			{
				cout<<"Rate cannot be negative. INVALID!\n";
				r=0;
			}
			cout<<"Enter time (in years): ";
			cin>>t;
			if(t>=0)
			{
				time=t;
			}
			else
			{
				cout<<"Time cannot be negative. INVALID!\n";
				t=0;
			}
		}
		
		float si()
		{
			return (principal*rate*time)/100;
		}
		
};

int main()
{
	Interest x;
	float p,r,t;
	x.setValues(p,r,t);
	cout<<"Simple Interest Calculated: "<<x.si()<<"\n";
	
	return 0;
}

