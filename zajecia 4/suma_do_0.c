#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main(){
	int a, sum=0;
	do{
		scanf("%d", &a);
		sum+=a;
	}
 	while(a);
	printf("%d ", sum);
	return 0;
}
