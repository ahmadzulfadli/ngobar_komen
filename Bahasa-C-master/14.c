#include <stdio.h>

int main(){

    int a;

    a = 6 == 6 ; // sama dengan
    printf("Hasil Variable a = %i\n",a);
    a = 6 != 6 ; // tidak sama dengan
    printf("Hasil Variable a = %i\n",a);
    a = 6 > 6 ; // lebih dari 
    printf("Hasil Variable a = %i\n",a);
    a = 6 < 6 ; // kurang dari 
    printf("Hasil Variable a = %i\n",a);
    a = 6 >= 6 ; // lebih dari atau sama dengan
    printf("Hasil Variable a = %i\n",a);
    a = 6 <= 6 ; // kurang dari atau sama dengan
    printf("Hasil Variable a = %i\n",a);

    // tips < (kurang) atau > (besar)

    return 0;

}