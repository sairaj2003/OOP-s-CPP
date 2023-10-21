//Hierarchical Inheritance

#include <iostream>
using namespace std;

class base
{
	public:
		void display()
		{
			cout<<"Hey i am from base class"<<endl;	
		}	
};

class derive1:public base
{
	public:
		void display()
		{
			cout<<"Hey i am from derive1 class"<<endl;	
		}
};

class derive2:public base
{
	public:
		void display()
		{
			cout<<"Hey i am from derive2 class"<<endl;	
		}	
};


int main() 
{
	base obj1;
	obj1.display();
	cout<<"--------------------------------------------\n";
	
	derive1 obj2;
	obj2.display();
	obj2.base::display();
	cout<<"--------------------------------------------\n";
	
	derive2 obj3;
	obj3.display();
	obj3.base::display();
	
	return 0;
}
