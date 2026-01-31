#include <iostream>
using namespace std;

 void fun(int *A,int n)
 //its a pointer to an array
  // this A is nothing but pointer to following array A
 {
 A[0]=15;
 
 	/*for(int i=0;i<n;i++)
 	cout<<A[i]<<endl;
 //	cout<<sizeof(A)/sizeof(int)<<endl; //8/4 8 is size of pointer and 4 is of int so result is 2

*/
 }
int main()

{
int A[ ]={2,4,5,3,7};
int n=5;
fun(A,n);
//cout<<sizeof(A)/sizeof(int)<<endl; //5
for(int x:A)
cout<<x<<" ";

	
	return 0;
}







