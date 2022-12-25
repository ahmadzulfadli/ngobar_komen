/* File: maxsort.c */
/* Penulis : Bu Dengklek, email inge@bebras.or.id */
/* Deskripsi : */
/* Mengurutkan elemen tabel dengan metoda makimum sort */
#include<stdio.h>
int main ()
{
  /* Kamus : */
  int i;
  int Tab[10]= { 1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
  int max; /* indek di mana  Tab[max] bernilai maksimum */
  int k, temp; /* variabel kerja */
  /* Algoritma maximum sort menurun, indeks paling kecil berisi nilai paling besar*/
  for (i=0; i<9; i++ ){
  /* tentukan indeks max, di mana Tab[max] bernilai maksimum */
  /* untuk index tabel i..10 */
     max = i;
     for (k= i+1 ;k< 10; k++)  {
        if (Tab[k]> Tab[max]) {
           max=k;
        }
     } 
 
    /* Tukar nilai Tab[max] dengan tab[i] */
    temp= Tab[i];
    Tab[i]= Tab[max];
    Tab[max] = temp;
  }
  for (i=0;i<10;i++) {
     printf (" %d ; ", Tab[i]);
  }
  return 0;
}
