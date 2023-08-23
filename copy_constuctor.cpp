#include <iostream>
using namespace std;

class Book{
	public:
	string author;
	string title;
	float* Rates;
	int RatesCount;
	
	Book(string _title,string _author)
	{
		title = _title;
		author = _author;
		RatesCount = 2;
		Rates =new float[RatesCount];
		Rates[0]=5;
		Rates[1]=4;
	}
	Book(const Book& original)
	{
		author = original.author;
		title = original.title;
		RatesCount = original.RatesCount;
//		Rates = original.Rates; Gives error as both original & copy point to same memory location
		Rates = new float[original.RatesCount];
		for(int i=0;i<RatesCount;i++)
		{
			Rates[i] = original.Rates[i];
		}
	}
	~Book()
	{
		delete[]Rates;
		Rates = NULL;
		}	
};

void printBook(Book book)//Here it is call by value and copy constructor is invoked
{
	cout<<"Title Of the Book "<<book.title<<endl;
	cout<<"Author of the Book "<<book.author<<endl;
	float sum=0;
	for(int i=0;i<book.RatesCount;i++)
		{
			sum += book.Rates[i];
		}
	cout<<"The average Rate "<<sum/book.RatesCount<<endl;
}

int main()
{
	Book book1("Millionaire Fastlane","M.J. Demarco");
	Book book2("C++ lambda story","Bartek F");
	
	Book book3(book1);
	printBook(book1);
	printBook(book2);
	printBook(book3);
//	Book book3=book1 This is same as Book book3(book1) i.e copy constructor
//	But just book3=book2 will not be copy constructor it will be assignment operator
	cout<<book1.Rates<<endl;
	cout<<book3.Rates<<endl;//This shows that now they point to different memory locations
	
	return 0;
}
