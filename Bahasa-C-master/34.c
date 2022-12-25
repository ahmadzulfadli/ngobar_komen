#include <stdio.h>

/*

0
1 0
2 1 0
3 2 1 0
4 3 2 1 0
5 4 3 2 1 0
6 5 4 3 2 1 0
7 6 5 4 3 2 1 0
8 7 6 5 4 3 2 1 0
9 8 7 6 5 4 3 2 1 0
10 9 8 7 6 5 4 3 2 1 0

*/

int main(){

    int a;
    printf("Masukan Nilai Anda = ");
    scanf("%i", &a);
    for(int i = 0 ; i <= a ; i++)
    {

        //printf(" Hasil Nilai = %i\n",i);
        for(int b = i ; b >= 0 ; b--)
        {

            printf("%i ",b);

        }
    printf("\n");
    }

    return 0;
}