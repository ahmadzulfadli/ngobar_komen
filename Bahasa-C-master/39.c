#include <stdio.h>

int main ()
{
    
    int x ;
    do
    {
        printf("Masukan Angka Selain 0 - 9 = ");
        scanf("%i",&x);
        printf("Hasil = %i \n",x);
        

    }while( x < 0 || x > 9 );



    return 0;

}



/*
intialisasi
do
{

statement 
operator

}while(Kondisi);

*/