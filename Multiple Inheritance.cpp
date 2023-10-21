#include <iostream>
using namespace std;

class base1
{
	public:
		void display()
		{
			cout<<"Hey i am from base1 class..."<<endl;
		}
};

class base2
{
	public:
		void display()
		{
			cout<<"Hey i am from base2 class..."<<endl;
		}
};

class derive:public base1,public base2
{
	public:
		void display()
		{
			cout<<"Hey i am from derive class"<<endl;
		}
	
};

int main() 
{
	base1 obj1;
	obj1.display();
	cout<<"----------------------------------\n";
	
	base2 obj2;
	obj2.display();
	cout<<"----------------------------------\n";
	
	derive obj3;
	obj3.display();
	obj3.base1::display();
	obj3.base2::display();
	
	return 0;
}
