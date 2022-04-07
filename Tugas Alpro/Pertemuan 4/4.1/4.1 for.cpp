#include <iostream>

using namespace std;

class For{
	public:
		void mencetak();
	private:
		int i;
};

void For::mencetak(){
	for(i = 1 ; i <= 4; i++){
		cout<<" "<<i;
	}
}

main(){
	For x;
	x.mencetak();
return 0;
}
