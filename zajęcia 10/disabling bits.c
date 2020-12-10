#include <stdio.h>
#include <stdbool.h>
int disableBits(long long number){
	int size=1;
	int dziurawa=1;
	while(pow(2, size)<number){
		size++;
		dziurawa=dziurawa<<1;
		if(size%2==1){
			dziurawa+=1;
		}
	}
	return number & dziurawa;
}

int main(){
	long long num;
	scanf("%d", &num);
	printf("%d", disableBits(num));
	
	return 0;
}
