//Hybrid Inheritance
/*
Here is a example in which we can see that there are combination of maltilevel & multiple inheritance

- First we will create class A which is independent class 
and then Class B is a derive class that derives properties from class A and also we will create independent class c and 
finally we create Desive Class D that  inherits properties from class B and C (i.e multiple inheritance)
and the whole is a combination of both multiple and multilevel hence it is hybrid inheritance
*/

#include <iostream>
using namespace std;

class A{
	public:
		void display()
		{
			cout<<"I am from base class A"<<endl;
		}
};

class B:public A{
	public:
		void display()
		{
			cout<<"I am from derive class B which inherits from base class A"<<endl;
		}
};

class C{
	public:
		void display()
		{
			cout<<"I am from Base class C"<<endl;
		}
};

class D:public B,public C{
	public:
		void display()
		{
			cout<<"I am from derive class C which inherits from class B and Class C";
		}
};

int main() 
{
	A obj1;
	obj1.display();
	cout<<"-----------------------------------\n";
	
	B obj2;
	obj2.display();
	obj2.A::display();                   //display class A using object of class B
	cout<<"-----------------------------------\n";
	
	C obj3;
	obj3.display();
	cout<<"-----------------------------------\n";
	
	D obj4;
	obj4.display();
	obj4.B::display();        //display class B using object of class D
	obj4.C::display();        //display class C using object of class D
	return 0;
}
