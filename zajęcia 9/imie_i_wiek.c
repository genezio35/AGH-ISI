#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	fp=fopen("dane_osobowe.txt", "r");
	char jestem[6], imie[30], mam[3], wiek[3];
	if(fp==NULL){
		printf("Nie udalo sie otworzyc pliku");
		exit(1);
	}

	fscanf(fp, "%s %s %s %s",&jestem, &imie, &mam, &wiek);
	printf("%s %s ", imie, wiek);
	
	fclose(fp);
	return 0;
}
