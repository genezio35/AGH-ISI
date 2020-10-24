#include <stdio.h>

int main(){
	int type, base, height;
	scanf("%d", &type);
	switch(type){
		//trojkat
		case 1:
			scanf("%d %d", &base, &height);
			printf("%f", (float)(base*height)/2.0);
			break;
		//kwadrat
		case 2:
			scanf("%d", &base);
			printf("%f", (float)(base*base));
			break;
		//prostokat
		case 3:
			scanf("%d %d", &base, &height);
			printf("%f", (float)(base*height));
			break;
	}
	return 0;
}
