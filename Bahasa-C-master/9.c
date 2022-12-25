#include <stdio.h>

int main(){

    int a = 10 ;
    printf("Pre-Increment \n"); // --a
    printf("Nilai a = %i \n", a);
    printf("Nilai a = %i \n", --a);
    printf("Nilai a = %i \n", a);
    
    int b = 10 ;
    printf("Post-Increment \n"); // b--
    printf("Nilai a = %i \n", b);
    printf("Nilai a = %i \n", b--);
    printf("Nilai a = %i \n", b);
    return 0;
}