// Program Segitiga Bintang

#include <iostream>

using namespace std;

int main()
{
// Kamus
    int b, k, t;

// Algoritma
    cout << "Masukkan tinggi segitiga bintang = ";
    cin >>t;
    for (b=1; b<=t; b++)
    {
        for (k=b; k<=t; k++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
