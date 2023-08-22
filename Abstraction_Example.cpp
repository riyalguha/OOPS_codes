#include <iostream>
using namespace std;

class smartphone{
	public:
		virtual void take_a_selfie()=0;
		virtual void make_a_call()=0;
};
class Android:public smartphone{
	public:
		void take_a_selfie()
		{
			cout<<"Android is Calling "<<endl;
		}
		void make_a_call()
		{
			cout<<" Android is making a call "<<endl;
		}
};

class ios:public smartphone{
	public:
		void take_a_selfie()
		{
			cout<<"ios is Calling "<<endl;
		}
		void make_a_call()
		{
			cout<<" ios is making a call "<<endl;
		}	
};

int main()
{
	smartphone* M31 = new Android();
	M31->take_a_selfie();
	M31->make_a_call();
	return 0;
}
