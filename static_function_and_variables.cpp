#include <iostream>
using namespace std;

class employee{
	int id;
	static int count;
	public:
		void set_data()
		{
			cout<<"Enter the id "<<endl;
			cin>>id;
			count++;
		}
		void get_data()
		{
			cout<<"The id of this employee is "<<id<<endl;
			cout<<"This is employee number "<<count<<endl;
		}
		static void get_count()
		{
//			Static member functions can access only static data members
			cout<<"The value of count is "<<count<<endl;
		}
};

int employee::count;//Default value is 0
//int employee::count=10;

int main()
{
	employee harry,ram,sita;
	harry.set_data();
	harry.get_data();
	employee::get_count();
	
	ram.set_data();
	ram.get_data();
	employee::get_count();
	
	sita.set_data();
	sita.get_data();
	employee::get_count();
	
	return 0;
}
