#include <stdio.h>

int main() {
    double vize, final, ortalama;

    printf("Vize notunu giriniz: ");
    scanf("%lf", &vize);

    printf("Final notunu giriniz: ");
    scanf("%lf", &final);

    // Vize %40, Final %60 ağırlığında hesaplama yapılıyor.
    ortalama = (vize * 0.4) + (final * 0.6);

    if (ortalama >= 50) {
        printf("Ortalamaniz: %.2lf\nDersten gectiniz!\n", ortalama);
    } else {
        printf("Ortalamaniz: %.2lf\nDersten kaldiniz.\n", ortalama);
    }

    return 0;
}