#include <stdio.h>
#include <string.h>

struct osoba{
	char imie[100];
	char nazwisko[100];
};


struct osoba rozdzielnik(char* full_name){
	struct osoba odp;
	//odp.imie="";
	//odp.nazwisko="";
	int index=0;
	odp.imie[0]=0;
	odp.nazwisko[0]=0;
	while(full_name[index]!=' '){
		
		strncat(odp.imie, &full_name[index], 1);
		
		++index;
	}
	
	++index;
	while(full_name[index]){
		strncat(odp.nazwisko, &full_name[index], 1);
		
		++index;
	}
	
	return odp;
}

int main(){
	char* tab="Maciej Krajewski";
	struct osoba ja=rozdzielnik(tab);
	printf("%s\n%s", ja.imie, ja.nazwisko);
	
	return 0;
}
