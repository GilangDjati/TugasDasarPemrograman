// Program Penjumlahan Deret Bilangan Genap

#include <iostream>

using namespace std;

int main()
{
// Kamus
    int i=1;                                                                // i sebagai bilangan
    int n;                                                                  // n sebagai batas bilangan
    int jumlah;

// Algoritma
    cout << "Program Penjumlahan Deret Bilangan Genap" << endl;
    cout << "========================================" << endl << endl;
    cout << "Masukkan n: ";
    cin >> n;
    for (int i=1; i<=n; i++)
        {
            if (i%2==0)
                {
                    jumlah=jumlah+i;
                    cout << i << " + ";
                }
        }
    cout << " = " << jumlah << endl;
    cout << "Finish" << endl;
    return 0;
}
