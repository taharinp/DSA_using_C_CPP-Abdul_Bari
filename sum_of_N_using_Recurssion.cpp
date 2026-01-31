#include<stdio.h>


int sum(int n)
{
	if(n==0)
	return 0;
	
}

int Isum(int n)
{
	int s=0;
	int i;
	for(i=1;i<=n;i++)
	s=s+i;
	return s;
	
}

int main()
{
	int r;
	r=Isum(5);
	printf("%d",r);
		
	return 0;
	
}
