#include <iostream>

using namespace std;

int main()
{
    float KelilingAlas, Luas, Volume;
    #define phi 3.14                 // konstanta nilai phi
    float r;                         // jari-jari tabung
    float t;                         // tinggi tabung
    KelilingAlas = 2 * phi * r;
    Luas = 2 * phi * r * r;
    Volume = phi * r * r * t;

    cout << "Program Mencari Keliling Alas, Luas, dan Volume Tabung" << endl;
    cout << "======================================================" << endl;
    cout << "KelilingAlas = " << KelilingAlas << endl;
    cout << "Luas = " << Luas << endl;
    cout << "Volume = " << Volume << endl;
    return 0;
}
