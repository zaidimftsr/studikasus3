#include <iostream>

using namespace std;

class Rata_rata{
	public:
		void mencetak();
	private:
		int n=1, jumlah=0, x=0;
		float jml,rata;
};

    void Rata_rata::mencetak(){
	n = 1;
	jml = 0;
	cout<<"Data ke-1: ";
	cin>>x;
	while(x > 0){
		jml += x;
		cout<<"Data ke-"<<n+1<<": ";
		cin>>x;
		n++;
	} 
    rata=(float) jumlah/(n-1);
    cout<<"Rata_rata="<<rata;
}

main(){
    Rata_rata x;
    x.mencetak();
    return 0;
}
