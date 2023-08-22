#include<iostream>
using namespace std;

//Single level Inheritance with virtual keyword

class A{
	public:
		virtual void display()
		{
			cout<<"A is being Called "<<endl;
		}
};

class B:public A{
	public:
		void display()
		{
			cout<<"B is being Called "<<endl;
		}
};

//Function overriding as first display() of A is called then display() of B is overidding it and is 
//prinited

int main()
{
	 B obj;
	 obj.display();
	 
//	 reference of A and obj of B
	 A* obj1 = new B();
	 obj1->display();
	
	return 0;
}
