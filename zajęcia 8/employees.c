#include <stdio.h>

const int liczba_pracownikow=3;

struct Employee{
	char *imie;
	char *nazwisko;
	int wiek;
	
};

struct Employee *findEmployee(struct Employee *employees,char *surname){
	int j=0;
	for(struct Employee *i=employees; j<liczba_pracownikow ; i++, j++){
		if(i->nazwisko == surname){
			return i;
		}
	}
	return NULL;
}

int main(){
	struct Employee employees[3];
	employees[0].imie="zdzis";
	employees[0].nazwisko="bohater";
	employees[0].wiek=50;
	
	employees[1].imie="alex";
	employees[1].nazwisko="kombajn";
	employees[1].wiek=20;
	
	employees[2].imie="klara";
	employees[2].nazwisko="kob";
	employees[2].wiek=10;
	
	char *nazwisko="jakshdgfjh";
	//printf("%d ", &employees);
	//printf("%d %d %d ", &employees[0].nazwisko, &employees[1].nazwisko, &employees[2].nazwisko);
	
	
	printf("%d", findEmployee(employees, nazwisko));
	return 0;
}
