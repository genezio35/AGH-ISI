#include <stdio.h>
#include <stdlib.h>

int** tab(int wysokosc, int szerokosc){
	int** output=malloc(sizeof(int*)*wysokosc);
	for(int i=0; i<wysokosc; i++){
		output[i]=malloc(sizeof(int*)*szerokosc);
	}
	return output;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int** tablica = tab(a, b);
	
	free(tablica);
	return 0;
}
