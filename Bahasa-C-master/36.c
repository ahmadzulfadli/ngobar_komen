#include <stdio.h>

// Judul while loop dengan input

int main(){

    int a;
    printf("Masukan Nilai = ");
    scanf("%i", &a);
    int i = 0;
    while(i<=a)
    {
        
        printf(" \tNilai = %i \n ",i);
        i++;
        
    }

    return 0;
}