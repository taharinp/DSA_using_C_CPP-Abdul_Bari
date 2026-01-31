#include <iostream>
#include <stdio.h>


//using functions

using namespace std;

struct rect
{
	int length;
	int breadth;
	
};
int area(struct rect r)
{
	return r.length*r.breadth;
}

int perimeter(rect r)
{
	int p;
	p=2*(r.length+r.breadth);
	return p;
	
}
int main()
{
	rect r={0,0};
	
	int length=0;
	int breadth=0;
	
	printf("enter length and breadth");
	cin>>length>>breadth;
	
	int a=area(r);
	int peri=perimeter(r);
	
	printf("area=%d\nperimeter=%d\n",a,peri);
		
	return 0;
	
}
