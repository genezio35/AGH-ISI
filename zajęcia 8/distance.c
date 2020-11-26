#include <stdio.h>

int distance(int *poczatek, int *koniec){
	//printf("%d %d %d", poczatek, koniec, sizeof(int));
	int size_of_array= (koniec-poczatek+1);
	return size_of_array;
}

int main(){
	
	int tab[20];
	
	int *start=tab;
	int *koniec=&tab[19];
	printf("%d", distance(start, koniec));
	return 0;
}
