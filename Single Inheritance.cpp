#include <iostream>
using namespace std;

class base{
	public:
		void display()
		{
			cout<<"Hi i am from base class"<<endl;
		}
};

class derive:public base{
	public:
		void display()
		{
			cout<<"Hi i am from Derived class"<<endl;
		}
};

int main() 
{
	base obj1;
	obj1.display();
	
	derive obj2;
	obj2.display();
	
	obj2.base::display();   //use to display content from base class using the object of derive class due to use of scope resolution operator
	
	return 0;
}
