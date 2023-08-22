#include <iostream>
using namespace std;

class equilateral{
	float a;
	float circumference;
	float area;
	public:
		void setA(float _a)
		{
			a=_a;
			circumference = 3*a;
			area = (1.73*(a*a))/4;
		}
	friend class homework;
};

//Friend Class is homework

class homework{
	public:
		void printResults(equilateral& obj)
		{
			cout<<"The circumference is "<<obj.circumference<<endl;
			cout<<" The area is "<<obj.area<<endl;
		}
};

int main()
{
	equilateral eq;
	eq.setA(5.2);
	homework h;
	h.printResults(eq);
	return 0;
}
