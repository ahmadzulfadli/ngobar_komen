#include <stdio.h>

int main(){

    char nama[25];
    int umur ;

    printf("Siapa nama kamu ?");
    scanf("%[^\n]]", &nama);
    printf("Berapa umur kamu ?");
    scanf("%i", &umur);
    printf("Nama kamu %s umur mu %i ",nama,umur);

    return 0;
}