#include <iostream>

using namespace std;

class dowhile{
	public:
		void mencetak();
	private:
		int i;
};

void dowhile::mencetak(){
	i=1;
	do{
		if(i % 2 == 1)
		cout<<i<<endl;
		i++;
	}
	while(i <= 10);
}

main(){
	dowhile x;
	x.mencetak();
}
