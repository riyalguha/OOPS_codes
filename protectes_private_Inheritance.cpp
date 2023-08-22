#include <iostream>
using namespace std;

class college{
	protected:
		string colname;
	public:
		void setname(string _name)
		{
			colname=_name;
		}
};

//Protected Inheritance
class student:protected college
{
	private:
	string 	stud_name;
	public:
		void set_names(string _colname,string _studname)
		{
			stud_name = _studname;
			setname(_colname);
		}
		void display()
		{
			cout<<"The College Name is "<<colname<<endl;
			cout<<"The Student Name is "<<stud_name<<endl;
		}
};

//Privae Inheritance
class globalstudent:private college
{
	protected:
	string 	stud_name;
	public:
		void set_names(string _colname,string _studname)
		{
			stud_name = _studname;
			setname(_colname);
		}
		void display_1()
		{
			cout<<"The College Name is "<<colname<<endl;
//			cout<<"The Student Name is "<<stud_name<<endl;
		}
};

class globalstud2:public globalstudent{
	protected:
		string new_name;
	public:
		void setter(string _name1,string _name2,string _name3)
		{
//			setname(_name1); This Line gives error as it is privately inherited
			new_name = _name3;
			set_names(_name1,_name2);
		}
		void display_2()
		{
//			cout<<"The College Name is "<<colname<<endl;This line will also give error as it privately inherited in the pervious class
			cout<<"The Student Name is "<<stud_name<<endl;
			cout<<"The Student Last Name is "<<new_name<<endl;
		}
};


int main()
{
//	protected Inheritance

//	student s;
//	s.set_names("HITK","Riyal");
//	s.display();

//Private Inheritance
	globalstud2 obj;
	obj.setter("HITK","Riyal","Guha");
	obj.display_1();
	obj.display_2();
	
	return 0;
}
