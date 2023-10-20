#include <iostream>
using namespace std;

class overloading
{
	public:
		
		int num1=10,num2=20;
	
		void fun(double a,double b)
		{
			double sum=num1+num2;
			cout<<"Sum:"<<sum<<endl;
		}
	
		void fun(int a,int b)
		{
			int sub=a-b;
			cout<<"Subtraction is:"<<sub;
		}
};

int main() 
{	
	overloading test;
	test.fun(30.20,10.10);
	
	test.fun(30,10);
	return 0;
}
