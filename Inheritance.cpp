#include <iostream>
using namespace std;

class Father
{
	protected:
		string surname="Gupta";
};

class son1:Father
{
	string name="Ram";
	public:
		void show()
		{
			cout<<name<<" "<<surname<<endl;	
		}	
};

class son2:Father
{
	string name="Shyam";
	public:
		void show()
		{
			cout<<name<<" "<<surname<<endl;
		}	
};


int main() 
{
	son1 s1;
	s1.show();
	
	son2 s2;
	s2.show();
	
	return 0;
}
