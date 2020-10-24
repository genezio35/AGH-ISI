#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main(){
	char tab[1000];
	int sum=0;
	scanf("%s", &tab);
	for(int i=0; tab[i]; i++){
		if(tab[i]>='0' && tab[i]<='9')
		sum++;
	}
	printf("%d ", sum);
	return 0;
}
