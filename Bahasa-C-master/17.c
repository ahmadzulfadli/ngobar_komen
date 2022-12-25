#include <stdio.h>

int main(){

    int a;

    printf("Masukan Jumalah Bulan = ");

    scanf("%i",&a);

    double tahun = (double) a /12;

    printf("Jumlah Tahun = %f",tahun);

    return 0;
}