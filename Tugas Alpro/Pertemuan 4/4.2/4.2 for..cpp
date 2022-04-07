#include <iostream>

using namespace std;

class For{
	public:
		void mencetak();
	private:
		int i;
};

void For::mencetak(){
	for(i = 0 ; i <= 10; i++){	
	if(i %2 == 1)
		cout<<i<<endl;
	}
}

int main(){
	For x;
	x.mencetak();
}
