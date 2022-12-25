#include <stdio.h>

// PERULANGAN FOR ATAU LOOPING FOR
// 1 INISIALISATION ATAU STAR 
// 2 KONDISI
// 3 OPERASI ATAU INCREMENT

int main(){

    int a;
    printf("Masukan Nilai Anda = ");
    scanf("%i", &a);
    for(int i = 0 ; i < a + 1 ; i++)
    {

        printf(" Hasil Nilai = %i\n",i);

    }

    return 0;
}