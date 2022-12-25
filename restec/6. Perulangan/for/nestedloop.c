#include <stdio.h>

void main(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
        	for(int y = 0; y < 10; y++){
        		printf("Perulangan ke (%d, %d, %d)\n", i, j, y);
			}
        }
    }
}
