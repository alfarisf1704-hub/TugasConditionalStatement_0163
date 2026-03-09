#include <iostream>
using namespace std;

float berat, tinggi;

void input()
{
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    cout << "Masukkan berat badan (Kg) : ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter) : ";
    cin >> tinggi;
}

float BMI(float b, float t)
{
    return b / (t * t);
}

string Status_badan(float r)
{
    if (r < 18.5)
        return "Berat Badan Kurang";
    if (r < 25)
        return "Berat Badan Normal";
    if (r < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

int main()
{
    input();
    cout << endl;
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda  : " << BMI(berat, tinggi) << endl;
    cout << "Status    : " << Status_badan(BMI(berat, tinggi)) << endl;
}
