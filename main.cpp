#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string nama;
    int a, b, c, e;
    cout << "Program Hitung Nilai Rata-Rata" << endl;
    cout << "Nama Siswa adalah : ";
    std::getline(std::cin, nama);

    cout << "Nilai Pertandingan ke I    : ";
    cin >> a;
    cout << "Nilai Pertandingan ke II   : ";
    cin >> b;
    cout << "Nilai Pertandingan ke III  : ";
    cin >> c;

    e = (a + b + c) / 3;

    std::cout << "Siswa ini bernama " << nama << std::endl;
    cout << "Mendapatkan nilai rata-rata " << e << " dari hasil perlombaan yang diikutinya" << endl;

    if (e >= 85)
        cout << "Maka mendapat hadiah Sepeda Mobil" << endl;
    else if (e >= 70)
        cout << "Maka mendapat hadiah Sepeda Motor,-" << endl;
    else
        cout << "Maka mendapat hadiah Kipas Angin" << endl;
    getchar();
}