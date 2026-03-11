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