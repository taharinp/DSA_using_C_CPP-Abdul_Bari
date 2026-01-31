#include <iostream>
using namespace std;
class rect
{
	private:
		int length;
		int breadth;
		public:
			rect()
			{
				length=0;
				breadth=0;
				
			}
			
			rect(int l,int b)
			
{
	length=l;
	breadth=b;
}
int area()
{
	return length*breadth;
	
}

int perimeter()
{
	return 2*(length+breadth);
}
void setLength(int l)
{
	length=l;
	
}
void setBreadth(int b)
{
	breadth=b;
	
}
int getLength()
{
	return length;
	
}

int getBreadth()
{
	return breadth;
	
}

					
		};
		int main()
		{
			rect r(10,2);
			cout<<r.area();
			cout<<r.perimeter();
			
			
			return 0;
			
		}




