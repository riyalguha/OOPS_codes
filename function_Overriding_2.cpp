#include <iostream>
using namespace std;

//Hierarchical and Multi-Level inheritance with function overriding

class A{
	public:
		virtual void display()
		{
			cout<<"A is being Called"<<endl;
		}
};

//A-->B,C

class B:public A{
	public:
		void display()
		{
			cout<<"B is being Called "<<endl;
		}
};

class D:public B
{
	public:
		void display()
		{
			cout<<"D is being Called "<<endl;
		}
};

class C:public A{
	public:
		void display()
		{
			cout<<"C is being Called "<<endl;
		}
};

int main()
{
	B b;
	b.display();
	
	C c;
	c.display();
	
	D d;
	d.display();
	
	A* obj = new B();
	obj->display();
	
	A* obj1 = new C();
	obj1->display();
	
	A* obj2 = new D();
	obj2->display();
	
	B* obj3 = new D();
	obj3->display();
	
	return 0;
}
