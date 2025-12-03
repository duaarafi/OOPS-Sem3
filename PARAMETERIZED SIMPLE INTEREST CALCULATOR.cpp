//PARAMETERIZED SIMPLE INTEREST CALCULATOR

#include<iostream>
using namespace std;

class Interest
{
	private:
		
		float principal;
		float rate;
		float time;
	
	public:
		
		Interest(float p, float r, float t)
		{
			principal=p;
			rate=r;
			time=t;
		}
			
		float si()
		{
			return (principal*rate*time)/100;
		}
		
};

int main()
{
	Interest x(2000,12,2);
	cout<<"Simple Interest Calculated: "<<x.si()<<"\n";
	
	return 0;
}

