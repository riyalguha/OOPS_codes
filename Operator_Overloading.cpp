#include <iostream>
#include <string>
#include <list>
using namespace std;

class YoutubeChannel{
	string name;
	int subscribercount;
	
	public:
		YoutubeChannel()
		{
			name="";
			subscribercount=0;
		}
		YoutubeChannel(string _name,int _subscribercount)
		{
			name = _name;
			subscribercount = _subscribercount;
		}
		friend ostream& operator<<(ostream& COUT,YoutubeChannel& obj);

		friend istream& operator>>(istream& CIN,YoutubeChannel& obj);

		//Overloading the == operator for the .remove() function can work
		bool operator==(const YoutubeChannel& obj1)const
		{
			if(this->name==obj1.name && this->subscribercount==obj1.subscribercount)
				return true;
			else
				return false;
		}
	
};

//Overloading << & >> for printing and reading in objects directly

ostream& operator<<(ostream& COUT,YoutubeChannel& obj)
{
	COUT<<"The Channel Name is "<<obj.name<<endl;
	COUT<<"The number of subscribers are "<<obj.subscribercount<<endl;
	return COUT;
}

istream& operator>>(istream& CIN,YoutubeChannel& obj)
{
	cout<<"Enter the name of the channel & subscribers"<<endl;
	CIN>>obj.name;
	CIN>>obj.subscribercount;
	return CIN;
}

class mycollection{
	private:
		list<YoutubeChannel> mychannels;
	public:
//		Overloading += operator to add objects to array of abjects
		void operator+=(YoutubeChannel& obj)
		{
			this->mychannels.push_back(obj);
		}
//		Overloading -= operator to remove the given object
//		(For this make sure == is also overloaded)
		void operator-=(YoutubeChannel& obj)
		{
			this->mychannels.remove(obj);
		}
		friend ostream& operator<<(ostream& COUT,mycollection& myChannels);
		
		
};
//Insertion operator overloading to print array of objects
 ostream& operator<<(ostream& COUT,mycollection& myCollection)
{
	for(auto channel:myCollection.mychannels)
	{
		COUT<<channel<<endl;
	}
	return COUT;
}

//void operator+=(mycollection& mychannels,YoutubeChannel& obj)
//{
//	this->mychannels.push_back(obj);
//}

int main()
{
	YoutubeChannel obj;
	cin>>obj;
	YoutubeChannel obj2;
	cin>>obj2;
	cout<<obj<<obj2;
	cout<<"Now Printing the array of objects"<<endl;
	mycollection myCollection;
	myCollection+=obj;
	myCollection+=obj2;
	myCollection-=obj2;
	cout<<myCollection<<endl;
//	operator<<(cout,obj);
//	operator<<(cout,obj2);
	return 0;
}
