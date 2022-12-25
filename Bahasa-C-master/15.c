#include <stdio.h>

int main(){

    int a;
    printf("Logika Not\n");
    a = !0;
    printf("Nilai a = %i\n",a);
    a = !1;
    printf("Nilai a = %i\n\n",a);

    printf("Logika AND\n");
    a = 0 && 0;
    printf("Nilai a = %i\n",a);
    a = 1 && 0;
    printf("Nilai a = %i\n",a);
    a = 0 && 1;
    printf("Nilai a = %i\n",a);
    a = 1 && 1;
    printf("Nilai a = %i\n\n",a);

    printf("Logika OR\n");
    a = 0 || 0;
    printf("Nilai a = %i\n",a);
    a = 1 || 0;
    printf("Nilai a = %i\n",a);
    a = 0 || 1;
    printf("Nilai a = %i\n",a);
    a = 1 || 1;
    printf("Nilai a = %i\n",a);
    return 0;

}