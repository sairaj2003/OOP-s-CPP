#include <iostream>
using namespace std;

class A
{
	public:
		void display()
		{
			cout<<"I am from class A"<<endl;
		}
};

class B:public A
{
	public:
		void display()
		{
			cout<<"I am from class B"<<endl;
		}
};


int main() 
{
	A obj1;
	obj1.display();
	
	B obj2;
	obj2.display();
	obj2.A::display();
	return 0;
}
