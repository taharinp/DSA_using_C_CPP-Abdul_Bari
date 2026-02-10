#include <iostream>
using namespace std;

int main()
{

	int *P = new int [5];
	for (int i=0;i<5;i++)
	P[i]=i+1;
		for (int i=0;i<5;i++)
		cout<<P[i] << " " ;
		

	return 0;
}
