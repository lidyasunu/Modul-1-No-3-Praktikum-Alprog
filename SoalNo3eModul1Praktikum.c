#include <stdio.h>
#include <math.h>

#define PI 3.14

double hitung_volume(double jari_jari, double tinggi);
double hitung_luas_permukaan(double jari_jari, double tinggi);

int main() {
    double jari_jari, tinggi;
    
    printf("Menghitung Volume dan Luas Permukaan Kerucut\n");
    printf("============================================\n\n");

    printf("Masukkan jari-jari kerucut: ");
    scanf("%lf", &jari_jari);

    printf("Masukkan tinggi kerucut: ");
    scanf("%lf", &tinggi);

// Menghitung volume kerucut
    double hitung_volume(double jari_jari, double tinggi) {
    return (1.0 / 3.0) * PI * jari_jari * jari_jari * tinggi;
}

// Menghitung luas permukaan kerucut
    double hitung_luas_permukaan(double jari_jari, double tinggi) {
    double sisi_miring = sqrt(jari_jari * jari_jari + tinggi * tinggi);
    return PI * jari_jari * (jari_jari + sisi_miring);
}
    // Menampilkan hasil
    printf("============================================\n\n");
    printf("\nHasil Perhitungan Anda:\n");
    printf("Volume Kerucut Adalah: %.2f\n", hitung_volume(jari_jari, tinggi));
    printf("Luas Permukaan Kerucut Adalah: %.2f\n", hitung_luas_permukaan(jari_jari, tinggi));

    return 0;
}