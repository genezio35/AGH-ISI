#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	fp=fopen("tessadfasdft.txt", "r");
	char odczyt[10000];
	if(fp==NULL){
		perror(NULL);
		exit(1);
	}else{
		fscanf(fp, "%s",&odczyt);
		printf("%s", odczyt);
	}
	fclose(fp);
	return 0;
}
