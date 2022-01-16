// Program Penjumlahan Deret Bilangan Prima

#include <iostream>

using namespace std;

int main()
{
// Kamus
    int in, faktor;
    int out=0;
    int cou=2;
    int jumlah=0;

// Algoritma
    cout << "Program Penjumlahan Deret Bilangan Prima" << endl;
    cout << "========================================" << endl << endl;
    cout << "Masukkan n: ";
    cin >> in;
    while (out<in)
        {
            faktor=0;
            for (int i=1; i<=cou; i++)
                {
                    if (cou%i==0)
                        {
                            faktor++;
                        }
                }
            if (faktor==2)
                {
                    cout << cou << " + " << " ";
                    out++;
                    jumlah+=cou;
                }
            cou++;
        }
        cout << " = " << jumlah << endl;
        cout << "Finish" << endl;

    return 0;
}
