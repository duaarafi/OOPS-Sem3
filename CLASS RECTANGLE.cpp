//CLASS RECTANGLE

#include <iostream>
using namespace std;

class Rectangle 
{
	private:
		float length;
		float breath;
	
	public:
		
	    void setLength(float l)
		{   
		    cout<<"Enter Length: ";
		    cin>>l;
			if (l>=0)
			{
				length=l;
			}
			else
			{
				cout<<"Negative Values for length are INVALID.\n";
				l=0;
			}
		}	
		
		void setBreath(float b)
		{
			cout<<"Enter Breath: ";
		    cin>>b;
			if (b>=0)
			{
				breath=b;
			}
			else
			{
				cout<<"Negative Values for breath are INVALID.\n";
				b=0;
			}
		}	
		
		float getLength()
		{
			return length;
		}
		
			float getBreath()
		{
			return breath;
		}
		
		float area()
		{
			return length*breath;
		}
		
		float perimeter()
		{
			return 2*(length+breath) ;
		}
};

int main()
{
	Rectangle r;
	float l,b;
	r.setLength(l);
	r.setBreath(b);
	cout<<"Length Given: "<<r.getLength()<<"\n";
	cout<<"Breath Given: "<<r.getBreath()<<"\n";
	cout<<"Area: "<< r.area()<<"\n";
	cout<<"Perimeter: "<< r.perimeter()<<"\n";
	
	return 0;
}
