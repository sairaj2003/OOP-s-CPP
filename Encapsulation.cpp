#include <iostream>
using namespace std;

class encap
{
	private:
		int age;
		string name;
	
	public:
		void setAge(int a)
		{
			this->age=a;
		}
		
		int getAge()
		{
			return age;
		}
		
		void setName(string na)
		{
			this->name="sairaj";
		}
		
		string getName()
		{
			return name;
		}
};

int main() 
{
	encap E;
	
	E.setAge(20);
	E.setName("sairaj");
	cout<<"Age:"<<E.getAge()<<endl<<"Name"<<E.getName();
	return 0;
}
