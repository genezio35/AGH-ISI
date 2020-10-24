#include <stdio.h>

int main(){
	const int size=2;
	double matrix[size][size];
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			scanf("%lf", &matrix[i][j]);
		}
		
	}
	for(int i=0; i<size; i++, printf("\n")){
		for(int j=0; j<size; j++){
			printf("%lf ", matrix[i][j]);
		}
	}
	return 0;
}
