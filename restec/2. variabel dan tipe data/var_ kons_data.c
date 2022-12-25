#include <stdio.h>

//pendefinisian konstanta
#define nama "Fadli Ganteng"
#define umur 10
#define goldarah 'O'
#define riska "triyanti"

int main(){
	
	//pemanggilan konstanta
	printf("Nama: %s \n", nama);
    printf("Umur: %d \n", umur);
    printf("Golongan Darah: %c\n", goldarah);
    printf("%s\n\n\n", riska);
    
    
	//pendefinisian  variabel
    int usia = 19;
    char geng [90] = "119505134979346973468733222343423432423";
    
    float berat = 65.3;
    double tinggi = 178.438097777777777777777777777;
    
    char jenis_kelamin = 'L';
    char yusri [20] = "makan ati";
    
    
	//pemanggilan variabel
    printf("Usia: %i tahun\n", usia);
    printf("geng: %s cm\n", geng);
    printf("Berat: %.2f Kg\n", berat);
    printf("Jenis kelamin: %c\n", jenis_kelamin);
    printf("yusri: %s\n", yusri);
    
    return 0;
}
