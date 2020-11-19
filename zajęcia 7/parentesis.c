#include <stdio.h>

void parenthesis1(char tab[]){
	printf("(%s)\n", tab);
}
void parenthesis2(char tab[]){
	printf("{%s}\n", tab);
}
void parenthesis3(char tab[]){
	printf("[%s]\n", tab);
}
void parenthesis4(char tab[]){;
	printf("<%s>\n", tab);
}



int main(){
	
	const int n=100;
	
	char tab[n];
	scanf("%s", &tab);
	void (*p1)(char tab[])=parenthesis1;
	p1(tab);
	p1=parenthesis2;
	p1(tab);
	p1=parenthesis3;
	p1(tab);
	p1=parenthesis4;
	p1(tab);
	return 0;
}
