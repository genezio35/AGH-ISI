#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void show(double *matrix, int height, int width){
	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){
			printf("%d ", *(matrix+i*height+j));
		}
	}
}


int main(){
	srand(time(NULL));
	int y1, w1, y2, w2;
	scanf("%d %d %d %d", &y1, &w1, &y2, &w2);
	
	double **macierz1=malloc(y1*sizeof(double*));
	for(int i=0; i<y1; i++){
		macierz1[i]=malloc(w1*sizeof(double));
		for(int j=0; j<w1; j++){
			macierz1[i][j]=rand()%100;
		}
	}
	double **macierz2=malloc(y2*sizeof(double*));
	for(int i=0; i<y2; i++){
		macierz1[i]=malloc(w2*sizeof(double));
		for(int j=0; j<w2; j++){
			macierz2[i][j]=rand()%100;
		}
	}
	show((double*)macierz1, y1, w1);
	
	return 0;
}
