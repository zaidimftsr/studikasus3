#include <iostream>
using namespace std;
class banding
{
	friend istream& operator>>(istream&, banding&);
	public :
		banding()
		{
			cout<<"Masukan nilai x : ";cin>>x;
			cout<<"Masukan nilai y : ";cin>>y;
			cout<<"Masukan nilay z : ";cin>>z;
		};
		void bandingkan ()
		{
			if (x>y)
			{
				if (x>z)
				{
				cout<<"bilangan terbesar adalah : "<<x;
			    }
			    else
				 {
			    	cout<<"bilanan terbesar adalah : "<<z;
			     }
			}
			else if (y>x)
			{
				if (y>z)
				{
				cout<<"bilangan terbesar adalah : "<<y;
			    }
			    else 
			    {
			    	cout<<"bilangan terbesar adalah : "<<z;
				}
			}
		}
	private :
		int x,y,z;
};
int main ()
{
	banding x;
	x.bandingkan();
}
