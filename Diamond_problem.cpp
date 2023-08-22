#include <iostream>
using namespace std;

//Diamond Problem A-->B,C-->D
//Instance of A is created two times so we use virtual inheritance or virtual base class


class A{
	public:
		A()
		{
			cout<<"A is cons "<<endl;
		}
		void display()
		{
			cout<<"A is being Called "<<endl;
		}
};

class B:virtual public A{
	public:
		B()
		{
			cout<<"B is cons "<<endl;
		}
};

class C:virtual public A{
	public:
		C()
		{
			cout<<"C is cons "<<endl;
		}
};

class D:public B,public C{
	public:
		D()
		{
			cout<<"D is cons "<<endl;
		}
//		void display()
//		{
//			cout<<"D is being Called"<<endl;
//		}
};

int main()
{
	D d;
	d.display();
	return 0;
}
