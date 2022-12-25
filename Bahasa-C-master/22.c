#include <stdio.h>



int main(){

    
    char a ;
    printf(" Masukan Karakter = ");
    scanf("%c",&a);
    printf(" Hasil Karakter Dalam Angka/Integer = %i\n",a);

    int b ;
    printf(" Masukan Angka dari 0 - 127 = ");
    scanf("%i",&b);
    printf(" Hasil dalam Karakter = %c\n",b);

    return 0;
}