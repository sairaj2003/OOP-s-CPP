//Friend Function:

#include <iostream>
using namespace std;

class raj;     // we declared class first beacuse we use it in function 'shyam'

class sai
{
	private:
		int money=100;
		friend void shyam(sai,raj);
};

class raj
{
	private:
		int money=200;
		friend void shyam(sai,raj);	
};

void shyam(sai r1,raj r2)
{
	int total=r1.money+r2.money;
	cout<<"Total:"<<total<<endl;
}

int main() 
{
	sai obj1;
	raj obj2;
	
	shyam(obj1,obj2);	
	return 0;
}
