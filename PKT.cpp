#include <iostream>
using namespace std;

// Prosedur untuk input data
void inputData(float &berat, float &tinggi) {
    cout << "Masukkan berat badan (kg) : ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m) : ";
    cin >> tinggi;
}

// Fungsi untuk menghitung BMI
float hitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

// Fungsi untuk menentukan kondisi berat badan
string kondisiBMI(float bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
         } 
    else if (bmi < 25) {
        return "Berat Badan Normal";
    } 
    else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    } 
     else {
        return "Obesitas";
    }
}

int main() {
    float berat, tinggi, bmi;

    inputData(berat, tinggi); // memanggil prosedur input
    bmi = hitungBMI(berat, tinggi); // memanggil fungsi hitung BMI

    cout << "Nilai BMI : " << bmi << endl;
    cout << "Kondisi : " << kondisiBMI(bmi) << endl;

    return 0;
}