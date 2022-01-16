// Program Untuk Menampilkan Matriks b x k Dengan Ukuran 5 x 5 yang Berisi Angka 1-25

#include <iostream>

using namespace std;

int main()
{
// Kamus
    int n=1,b,k;

// Algoritma
    cout << "Program Untuk Menampilkan Matriks b x k Dengan Ukuran 5 x 5 yang Berisi Angka 1-25" << endl;
    cout << "==================================================================================" << endl << endl;
    for (b=0; b<5; b++)
        {
            for (k=0; k<5; k++)
                {
                    cout << n << " ";
                    n++;
                }
                cout << endl;
        }
    return 0;
}
