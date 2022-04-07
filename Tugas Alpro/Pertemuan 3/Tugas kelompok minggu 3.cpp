#include <iostream>

using namespace std;

int main()

{

    char karakter;

    cout << “Masukkan sebuah karakter: “;

    cin >> karakter;

    if (karakter >=’A’ && karakter <=’Z’)

        cout << “Masukkan Anda adalah huruf besar”;

    else if (karakter >=’a’ && karakter <=’z’)

        cout << “Masukkan Anda adalah huruf kecil”;

    else if (karakter >=’0' && karakter <=’9')

        cout << “Masukkan Anda adalah angka”;

    else

        cout << “Masukkan Anda bukan alphanumeric”;

    return 0;

}
