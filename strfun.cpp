#include <iostream>
#include <stdio.h>


//using functions

using namespace std;

struct rect
{
	int length;
	int breadth;
	
};

void initialise(struct rect *r,int l,int b)
{
	r->length=l;
	r->breadth=b;
}
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
	
	int l,b;
	
	printf("enter length and breadth");
	cin>>l>>b;
	
	
	initialise(&r,l,b);
	
	int a=area(r);
	int peri=perimeter(r);
	
	printf("area=%d\nperimeter=%d\n",a,peri);
		
	return 0;
	
}
