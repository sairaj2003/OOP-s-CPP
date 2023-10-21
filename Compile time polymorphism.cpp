//we can achive compile time polymorphism using function overloading

#include <iostream>
using namespace std;

void display(int age)
{
	cout<<"The age is:"<<age<<endl;
}

void display(string name)
{
	cout<<"The name is:"<<name<<endl;
}

void display(double salary)
{
	cout<<"The salary is:"<<salary<<endl;
}

int main() 
{
	display(20);
	display("sairaj");
	display(50000.56);
	return 0;
}
