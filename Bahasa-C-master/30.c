#include <stdio.h>

int main()
{

int umur;
printf("Masukan Umur mu = ");
scanf("%i",&umur);

switch(umur)
{
    case 10:
    printf("Kamu Masih Kecil \n");
    break;
    case 20:
    printf("Kamu Sudah Remaja \n");
    break;
    case 30:
    printf("Kamu Sudah Dewasa \n");
    break;
    default:
    printf("Kamu salah masukin Umur \n");
    break;

}

return 0;
 
}

/*

switch(a)
{
case 1:
 bloks statemen
case 2:
 bloks statemen
case 3:
 bloks statemen
default:
 bloks statemen
}
*/