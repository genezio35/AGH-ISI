#define List_H

#include <stddef.h> // size_t
#include <stdint.h> // int_fast32_t
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
typedef int_fast32_t T;

struct Node{
	T value;
	struct Node *previous, *next;
};

struct List{
	struct Node *first, *last;
	int size;
};

struct Node* constructNode(T value, struct Node *previous){
	struct Node *brand_new = malloc(sizeof(struct Node));
	brand_new->value = value;
	brand_new->previous = previous;
	brand_new->next = 0;
	
	return brand_new;
}

struct List* constructList(){
	struct List *new_list = malloc(sizeof(struct List));
	new_list->first = NULL;
	new_list->last = NULL;
	new_list->size = 0;
	return new_list;
}

struct List* constructListN(size_t elements, T value){
	struct List *lista = constructList();
	struct Node *wezel = constructNode(value, NULL);
	lista->first = wezel;
	lista->last = wezel;
	lista->size++;
	for (int i=1; i<elements; i++){
		struct Node *pom = constructNode(value, wezel);
		lista->last->next = pom;
		pom->previous = lista->last;
		lista->last = pom;
		lista->size++;
	}
	return lista;
}


void deconstructNode(struct Node *node){
	free(node);
}


void printList(struct List *list){
	struct Node *current = list->first;
	while(current!=list->last){
		printf("%d ", current->value);
		current = current->next;
	}
	//printf("%d\n", current->value);
	printf("\n");
}

void deconstructorList(struct List *list){
	struct Node *poczatek = list->first, *pom;
	while(poczatek->next){
		poczatek = poczatek->next;
	}
	while(poczatek->previous){
		pom = poczatek->previous;
		free(poczatek);
		poczatek = pom;
	}
	free(poczatek);
	return;
}

void pop_back(struct List* lista){
	if(lista->size>1){
		struct Node *pom;
		pom = lista->last->previous;
		free(lista->last);
		lista->last = pom;
		lista->size--;
	}else{
		if(lista->size==1){
			free(lista->last);
			lista->last = NULL;
			lista->first = NULL;
		}
		lista->size--;
	}
}

void funkcja(T value){
	printf("%d ", value*234);
}

void for_each(struct List* lista, int *f(T)){ 
	struct Node* start = lista->first;
	while(start->next){
		f(start->value);
		start = start->next;
	}
}

int main(){
	
	int (*f)(T) = funkcja;
	struct List *lista = constructListN(5, 5);
	//printList(lista);
	//deconstructorList(lista);
	printList(lista);
	f=funkcja;
	for_each(lista, f);
	return 0;
}
