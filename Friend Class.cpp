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
			cout<<"a"<<a<<" "<<"b"<<b<<endl;	
		}
		
		friend class B;	
};

class B
{
	public:
		void add(A ref)
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
	obj2.add(obj1);	
	return 0;
}
