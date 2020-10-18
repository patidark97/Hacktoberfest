#include<iostream>
#include<math.h>
using namespace std;
class Area
{
	public:
		float area(float r)
		{
			return ( M_PI*r*r);
		} 
		float area(float l, float b){return(l*b);}
		float area(float a, float b, float c)
		{
			float s;
			s=(a+b+c)/2;
			return(sqrt(s*(s-a)*(s-b)*(s-c)));
		}
};
int main()
{
	Area a2;
	cout<<"area of circle is : "<<a2.area(2);
	cout<<"\n area of rectangle : "<<a2.area(4,5);
	cout<<"\n area of triangle : "<<a2.area(3,4,5);
}
