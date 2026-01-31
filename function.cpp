#include <iostream>
using namespace std;
add(int x, int y) //function //formal parameters
{

	return x+y;
}

int main()
{
int x=12;
 int y=43;
int sum;
sum=x+y;	//actual parameter x and y will be copied in a b
sum=add(x,y); //function call

cout<<"sum is"<<sum<<endl;
return 0;

}
