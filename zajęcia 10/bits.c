#include <stdio.h>
#include <stdbool.h>
bool isEnabled(long long number, unsigned bit){
	return number&(1 << (bit - 1));
}

int main(){
	long long num;
	long long which_one;
	scanf("%ll %u", &num, &which_one);
	
	printf("%d", isEnabled(num, which_one));
	
	return 0;
}
