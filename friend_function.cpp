#include <iostream>
#include <string>
using namespace std;
class student;
//FRIEND FUNCTION INSIDE A CLASS BUT THIS IS NOT A FRIEND CLASS
class secondfriend
{
	public:
		void memberfunc(student& obj);
};

class student
{
	string name;
	public:
		student(string _name)
		{
			name = _name;
		}
		friend void display(student& obj);
		friend void secondfriend::memberfunc(student& s);
	
};


void secondfriend::memberfunc(student& obj)
{
	cout<<"The second friend says that his name is "<<obj.name<<endl;
}	



//Friend Function as a global Function
void display(student& obj)
{
	cout<<"Name of the student is "<<obj.name<<endl;
}

int main()
{
	student s("Riyal");
	display(s);
	secondfriend obj;
	obj.memberfunc(s);
	return 0;
}
