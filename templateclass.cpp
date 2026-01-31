#include<iostream>
using namespace std;
template<class T>
class Airthmetic
{
	private:
		T a;
		T b;
		

public:
Airthmetic(T a,T b);
T add();

T sub();
};

template<class T>
Airthmetic<T>::Airthmetic(T a,T b)


{
	this->a=a;
	this->b=b;
	
	
	}
	template<class T>
	T Airthmetic<T>::add()
	
	{
		T c;
		c=a+b;
		return c;
		
		
		}
		template<class T>
		T Airthmetic<T>::sub()
		
		{
			T c;
			c=a-b;
			return c;
			
			


			}
			
			
			
			
			
			
			
		
		int main()
		{
			Airthmetic<int> ar(10,5);
			cout<<"add"<<ar.add()<<endl;
			cout<<"sub"<<ar.sub()<<endl;
			return 0;
			
		}
			
			
			
			
			
				
