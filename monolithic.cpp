#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
	int length=0;
	int breadth=0;
	
	printf("enter length and breadth");
	cin>>length>>breadth;
	
	int area=length*breadth;
	int peri=2*(length+breadth);
	
	printf("area=%d\nperimeter=%d\n",area,peri);
	
	
	
	
	
	
	return 0;
	
}
