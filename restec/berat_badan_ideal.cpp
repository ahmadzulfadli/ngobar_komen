#include <stdio.h>

int main(){
	int tinggi_badan;
	float sepuluh_persen, kurang_tinggi, ideal;
	
	printf("====================Tinggi Badan========================\n");
	printf("Masukkan tinggi badan : "); scanf("%i", &tinggi_badan);
	printf("========================================================\n\n\n\n");
	kurang_tinggi = tinggi_badan - 100;
	sepuluh_persen = kurang_tinggi * 10 / 100;
	ideal = kurang_tinggi - sepuluh_persen;
	
	printf("======================Tugas Arya Pratama====================\n");
	printf("Berat badan idealnya adalah = %.1f", ideal);
	printf("\n============================================================\n");
	
}
