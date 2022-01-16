// Program Menentukan Ketinggian Maksimal Terbang Drone

#include <iostream>

using namespace std;

int main()
{
// Kamus
    int a;

// Algoritma
    cout << "Program Menentukan Ketinggian Maksimal Terbang Drone" << endl;
    cout << "====================================================" << endl;
    cout << "Masukkan angka " ;
    cin >> a;
    if (a<=120)
        {
            cout << a << " Meter" << " Diizinkan" << endl;
        }
    else
        {
            cout << a << " Meter" << " Tidak diizinkan" << endl;
        }
    cout << "Program Selesai" << endl;

    return 0;
}
