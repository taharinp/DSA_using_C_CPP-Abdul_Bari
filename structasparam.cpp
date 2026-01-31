#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct rect
{
	int l;
	int b;
	
};

/*void fun(struct rect r)
{
	r.l=20;
	cout<<r.l<<endl<<r.b<<endl;
	
}

int main()

{
	struct rect r={10,5};
	fun(r);
	
	cout<<r.l<<endl;
	cout<<r.b<<endl;
	return 0;
	
}
*/
 //for pointer


/*
void fun(struct rect *P)
{
	P->l=20;
	cout<<P->l<<endl<<P->b<<endl;
	
}

int main()

{
	struct rect r={10,5};
	fun(&r);
	
	cout<<r.l<<endl;
	cout<<r.b<<endl;
	return 0;
	
}
*/


struct rect *fun()
{
	struct rect *P;
	P=new rect;
//	p=(struct rect )

P->l=23;
P->b=34;




return P;
}
int main()
{
	struct rect *ptr=fun();
cout<<ptr->l<<endl<<ptr->b<<endl;	
	
	
	
}






