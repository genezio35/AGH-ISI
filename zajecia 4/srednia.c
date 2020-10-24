#include <stdio.h>
#include <limits.h>

int main(){
	int n;
	double sum=0, number;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lf", &number);
		sum+=number;
	}
	printf("%lf", (double)(sum/n));
	return 0;
}
