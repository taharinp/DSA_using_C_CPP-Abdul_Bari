#include <iostream>
using namespace std;
//call by value
/* int add(int a, int b)

{
//	int c;
//	c=a+b;
a++;
cout<<a;

	return 0;

}
int main()
{
	int num1=10,num2=15,sum;
	sum=add(num1,num2);
	cout<<endl<<num1;
//	cout<<"sum is"<<sum;
	return 0;
	
} */	
	
	//call by address
	//address of actaul parameters are pased through pointers and pointers
	//indiarectly access actual param
	
/*
	void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
int main()
{
	int num1=10,num2=15;
	swap(&num1,&num2);
	cout<<endl<<num1;
	cout<<endl<<num2;

	return 0;
	
}
*/
//call by reference supported in cpp

	void swap(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
}
int main()
{
	int num1=10,num2=15;
	swap(num1,num2);
	cout<<endl<<num1;
	cout<<endl<<num2;

	return 0;
	
}
