#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	const char tab[]="tata czyta cytaty tacyta";
	fp=fopen("plik.txt", "w");
	if(fp==NULL){
		printf("Nie udalo sie otworzyc pliku");
		exit(1);
	}
	fprintf(fp, "%s", tab);
	fclose(fp);
	return 0;
}
