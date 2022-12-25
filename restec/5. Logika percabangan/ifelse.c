#include <stdio.h>

void main(){
    int nilai;
    char grade;

    printf("=== Program Penilaian ===\n");
    printf("Inputkan nilai: ");
    scanf("%i", &nilai);

    if (nilai >= 90) {
        grade = 'A';
    } else if (nilai >= 70) {
        grade = 'B';
    } else if (nilai >= 50) {
        grade = 'C';
    } else if (nilai >= 40) {
        grade = 'D';
    } else if (nilai >= 30) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("Nilai: %i\n", nilai);
    printf("Grade anda: %c\n", grade);
}
