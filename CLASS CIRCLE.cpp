//CLASS CIRCLE

#include<iostream>
using namespace std;

class Circle
{
	private:
		
		float radius;
	
	public:
		
		void setRadius(float r)
		{
			cout<<"Enter radius of the circle: ";
			cin>>r;
			if(r>=0)
			{
				radius=r;
			}
			else
			{
				cout<<"Radius cannot be negative. INVALID!\n";
				r=0;
			}
		}
		
		float getRadius()
		{
			return radius;
		}
		
		float area()
		{
			return 3.14*radius*radius;
		}
		
		float perimeter()
		{
			return 2*3.14*radius;
		}
		
};

int main()
{
	Circle c;
	float r;
	c.setRadius(r);
	cout<<"Radius given: "<<c.getRadius()<<"\n";
	cout<<"Area: "<<c.area()<<"\n";
	cout<<"Perimeter: "<<c.perimeter()<<"\n";
	
	return 0;
}

