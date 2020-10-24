#include <stdio.h>

int main(){
	int n;
	double number, sum=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lf", &number);
		sum+=number;
	}
	printf("%lf", sum);
	return 0;
}
