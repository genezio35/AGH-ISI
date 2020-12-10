#include <stdio.h>
#include <stdbool.h>
int enableBit(long long number, unsigned bit){
	int num = (1 << (bit - 1));
	return number | num;
}

int main(){
	long long num;
	unsigned which_one;
	scanf("%d %d", &num, &which_one);
	int halo = enableBit(num, which_one);
	printf("%d", enableBit(num, which_one));
	
	return 0;
}
