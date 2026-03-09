#include <iostream>
using namespace std;

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
