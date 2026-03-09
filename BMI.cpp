#include <iostream>
using namespace std;

float berat, tinggi, status;

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

string Status_badan(float bm)
{
    if (bm < 18.5)
        return "Berat Badan Kurang";
    if (bm < 25)
        return "Berat Badan Normal";
    if (bm < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

void output()
{
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda  : " << BMI(berat, tinggi) << "" << endl;
    cout << "Status    : " << Status_badan(status) << "" << endl;
}

int main()
{
    input();
    output();
    status = BMI(berat, tinggi);
}
