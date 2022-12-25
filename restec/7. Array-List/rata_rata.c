#include <stdio.h>

int main(){
	int nilai [8] = {12,12,14,15,16,17,14,14};
	
	int jumB = sizeof(nilai)/sizeof(*nilai);
	int jumT = 0;
	
	for (int j = 0; j <= 7; j++){
		printf("nilai ke-%i adalah : %i\n", j, nilai[j]);
	}
	
	for (int i = 0; i <= jumB; i++){
		jumT += nilai[i];
	}
	
	float rata_rata = (float)jumT/(float)jumB;
	
	printf("\nJumlah Rata-Ratanya adalah : %.2f", rata_rata);	
}
