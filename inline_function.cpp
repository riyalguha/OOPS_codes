#include <iostream>
using namespace std;

inline int product(int a,int b)//Makes it faster as it replaces this functions code in the function call area
{
	return a*b;
}

int main()
{
	int a,b;
	cout<<"Enter the number a and b respectively"<<endl;
	cin>>a>>b;
	cout<<"The product of the numbers is "<<product(a,b)<<endl;
	cout<<"The product of the numbers is "<<product(a,b)<<endl;
	cout<<"The product of the numbers is "<<product(a,b)<<endl;
	cout<<"The product of the numbers is "<<product(a,b)<<endl;
	cout<<"The product of the numbers is "<<product(a,b)<<endl;
	cout<<"The product of the numbers is "<<product(a,b)<<endl;
	cout<<"The product of the numbers is "<<product(a,b)<<endl;
	cout<<"The product of the numbers is "<<product(a,b)<<endl;
	cout<<"The product of the numbers is "<<product(a,b)<<endl;
	cout<<"The product of the numbers is "<<product(a,b)<<endl;
	cout<<"The product of the numbers is "<<product(a,b)<<endl;
	
	
	return 0;
}
