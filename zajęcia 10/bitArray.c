#include <stdio.h>
#include <stdbool.h>

bool getArrayBit(int array[10], unsigned element, unsigned bit){
	int patient = array[element-1];
	return patient&(1 << (bit - 1));
}

int main(){
	int tab[10] = {1, 2, 3, 4, 5, 6 ,7, 8, 9};
	unsigned element, bit;
	scanf("%d %d", &element, &bit);
	printf("%d", getArrayBit(tab, element, bit));
	
	return 0;
}
