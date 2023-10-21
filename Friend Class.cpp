//Friend Class:

#include <iostream>
using namespace std;

class A
{
	private:
		int a=10,b=20;
	
	public:
		void show()
		{
			cout<<"a:"<<a<<" "<<"b:"<<b<<endl;	
		}
		
		friend class B;	   //declare friend class
};

class B
{
	public:
		void add(A ref)         // ref is an object of class A that is passed as a parameter
		{
			int sum=ref.a+ref.b;
			cout<<"Addition of a and b is:"<<sum;
		}	
};

int main() 
{
	A obj1;
	obj1.show();
	
	B obj2;
	obj2.add(obj1);	 //In class B, the add function should take an object of class A as a parameter because it needs access to the private members 'a' and 'b' of class A.
	return 0;
}
