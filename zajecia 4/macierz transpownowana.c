#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int tab[a][b];
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			scanf("%d", &tab[i][j]);
		}
	}
	for(int i=0; i<b; i++, printf("\n")){
		for(int j=0; j<a; j++){
			printf("%d ", tab[j][i]);
		}
	}
	return 0;
}
