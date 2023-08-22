#include <iostream>
using namespace std;

//Example of function overloading or early binding or compile time polymorphism
class operations
{
	public:
	int sum(int a,int b)
	{
		return a+b;
	}
	int sum(int a,int b,int c)
	{
		return a+b+c;
	}
	int multiply(int a,int b)
	{
		return a*b;
	}
	int multiply(int a,int b,int c,int d)
	{
		return a*b*c*d;
		}	
	double divide(double a,double b);
};

//Example of Scope Resulution
double operations::divide(double a,double b)
{
	return a/b;
} 

int main()
{
	operations obj;
	cout<<obj.sum(5,6)<<endl;
	cout<<obj.sum(1,2,3)<<endl;
	cout<<obj.multiply(5,6)<<endl;
	cout<<obj.multiply(1,2,3,4)<<endl;
	cout<<obj.divide(5,2)<<endl;
	return 0;
}
