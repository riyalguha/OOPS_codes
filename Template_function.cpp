#include <iostream>
using namespace std;

template<typename T>
void Swap(T& a,T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a=10,b=20;
	cout<<a<<" And "<<b<<endl;
	Swap(a,b);
	cout<<a<<" And "<<b<<endl;
	char c = 'c',d = 'd';
	cout<<c<<" And "<<d<<endl;
	Swap(c,d);
	cout<<c<<" And "<<d<<endl;
	return 0;
}
