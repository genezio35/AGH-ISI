#include <stdio.h>

enum week{
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
	sunday
};

int main(){
	enum week day;
	day=-99;
	printf("%d", day);
	return 0;
}
