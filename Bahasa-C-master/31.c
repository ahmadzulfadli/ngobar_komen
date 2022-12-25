#include <stdio.h>

int main()
{

int umur;
printf("Masukan Umur mu = ");
scanf("%i",&umur);

switch(umur)
{
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    printf("Kamu Masih Kecil \n");
    break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    printf("Kamu Sudah Remaja \n");
    break;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    printf("Kamu Sudah Dewasa \n");
    break;
    default:
    printf("Kamu salah masukin Umur \n");
    break;

}

return 0;
 
}

