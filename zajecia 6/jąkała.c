#include <stdio.h>
#include <stdlib.h>

const int max_powtorzen=3;

void jakala(char *tab){
	for(int i=0; tab[i]; i++){
		if(tab[i]=='a' || tab[i]=='e' || tab[i]=='u' || tab[i]=='y' || tab[i]=='i' || tab[i]=='o'){
			for(int j=0; j<1+rand()%max_powtorzen; j++){
				printf("%c", tab[i]);
			}
		}else{
			printf("%c", tab[i]);
		}
	}
}

int main(){
	time_t t;
	srand((unsigned) time(&t));
	char* tab="wszystkiego najlepszego!";
	jakala(tab);
	return 0;
}
