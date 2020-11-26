#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *from, *to;
	from=fopen("from.txt", "r");
	to=fopen("to.txt", "w");
	char odczyt[10000];
	if(from==NULL || to==NULL){
		perror(NULL);
		exit(1);
	}else{
		while(fscanf(from, "%s",&odczyt)==1){
			fprintf(to, "%s ", odczyt);
		}
		
	}
	fclose(from);
	fclose(to);
	return 0;
}
