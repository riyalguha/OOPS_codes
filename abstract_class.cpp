#include <iostream>
using namespace std;

//Abstract Class and pure virtual function

class instrument{
	public:
		virtual void make_sound()=0;//Pure Virtual Function
};

class guitar:public instrument{
	public:
		void make_sound()
		{
			cout<<"Guitar is being Played...."<<endl;
		}
};

class piano:public instrument{
	public:
		void make_sound()
		{
			cout<<"Piano is being Played....."<<endl;
		}
};

int main()
{
	
	instrument* obj1 = new guitar();
	obj1->make_sound();
	
	instrument* obj2 = new piano();
	obj2->make_sound();
	
	guitar g;
	g.make_sound();
	
	return 0;
}
