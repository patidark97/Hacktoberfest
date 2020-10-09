#include<iostream>
#include<math.h>
using namespace std;
class Area
{
	public:
		float area(float r)
		{
			return (3.14*r*r);
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
	Area a1;
	cout<<"area of circle is : "<<a1.area(2);
	cout<<"\n area of rectangle : "<<a1.area(4,5);
	cout<<"\n area of triangle : "<<a1.area(3,4,5);
}
