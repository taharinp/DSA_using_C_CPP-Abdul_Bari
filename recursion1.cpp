#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void fun(int n)
{
	if(n>0)
	{
		
		fun(n-1);
		printf("%d",n);
	}
}
int main() {
	
	int x=3;
	
	fun (x);
	
	
	return 0;
}
