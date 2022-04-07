#include <iostream>
using namespace std;
int main ()
{ 
    int a;
    cout<<"Program konversi nilai hari"<<endl;
    cout<<"masukkan hari ke-";
    cin>>a;
    if(a==1)
    cout<<"SENIN";
    else if(a==2)
    cout<<"SELASA";
	else if(a==3)
    cout<<"RABU";
    else if(a==4)
    cout<<"KAMIS";
    else if(a==5)
    cout<<"JUM'AT";
    else if(a==6)
    cout<<"SABTU";
    else if(a==7)
    cout<<"MINGGU";
    else
    cout<<"EROR";
        
	return 0;              
}
