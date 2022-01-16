#include <iostream>

using namespace std;

int main()
{
// Kamus
    int n, i, j;
    string arr_nama_bulan[12]={"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};

// Algoritma
    cout << "Program Mencetak Nama Bulan Berurutan Sampai Batas ke-n" << endl;
    cout << "=======================================================" << endl << endl;
    cout << "Masukkan jumlah bulan = ";
    cin >> n; cout << endl;
    for (i=0; i<n; i++)
        {
            j=i+1;
            cout << "Bulan ke-" << j << " = " << arr_nama_bulan[i] << endl;
        }
    cout << endl;
    cout << "=======================================================" << endl;
    cout << "Program selesai" << endl;
    return 0;
}
