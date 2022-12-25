#include <stdio.h>

int main(){

    int a;
    printf("Masukan Nilai a = ");
    scanf("%i",&a);

    if(a>10)
    {

       printf("A lebih dari 10");

    }
    else if(a<0)
    {
        printf("A kurang dari 0");
    }
    else
    {
        printf("A antara 0 dan 10");
    }

}

/*

if(kondisi)
{
    Blok Statement
}
else if(kondisi)
{
    Blok Statement
}
else
{
    Blok Statement
}

*/