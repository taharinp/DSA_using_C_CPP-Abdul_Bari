#include <iostream>
#include <stdio.h>
#include<stdlib.h>
 
using namespace std;
 
 struct rect
 {
 	int l;
 	int b;
 	
 };
 int main()
 {
 	
 	struct rect *p;
 p=new rect;
 
 	p->l=15;
 	p->b=8;
 	
 	
 
 
 cout<<p->l<<endl;
 cout<<p->b<<endl;
 
 	
 }
