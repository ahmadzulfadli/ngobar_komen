#include <stdio.h>

int main(){
	int matrix [4][4] = {
		{2,3,1,4},
		{1,5,8,0},
		{0,1,2,5},
		{4,2,9,8}
	};
	
	printf("isi matrix (0,3) adalah %i\n\n", matrix[0][2]);
	
	for (int i = 0; i <= 3; i++){
		for (int j = 0; j <= 3; j++){
			printf("isi matrix (%i , %i) adalah %i\n\n", i, j, matrix[i][j]);
		}
	}
}
