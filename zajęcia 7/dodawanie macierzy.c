#include <stdio.h> 
#include <stdlib.h> 

void addition(int *arr1, int *arr2, int r1, int c1, int r2, int c2){
	
	if(r1==r2 && c1==c2){
		 for(int i = 0; i <  r1; i++){
		 	for(int j = 0; j < c1; j++){
		 		printf("%d ", *(arr1 + i*c1 + j) + *(arr2 + i*c1 + j));
			}
			printf("\n");
		}
	}else{
		printf("zle wymiary macierzy!");
	}
}



int main() 
{ 
    int r1, c1, r2, c2;
    
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    
    int *arr1 = (int *)malloc(r1 * c1 * sizeof(int));
  	int *arr2 = (int *)malloc(r2 * c2 * sizeof(int));
  	
  	
    int i, j, count = 0; 
    for (i = 0; i <  r1; i++) 
      for (j = 0; j < c1; j++) 
         *(arr1 + i*c1 + j) = ++count; 
  	

    for (i = 0; i <  r2; i++) 
      for (j = 0; j < c2; j++) 
         *(arr2 + i*c1 + j) = ++count; 
  	
    /*for (i = 0; i <  r1; i++, printf("\n")) 
      for (j = 0; j < c1; j++) 
         printf("%d ", *(arr1 + i*c1 + j)); */
  
   addition((int*)arr1, (int*)arr2, r1, c1, r2, c2);
    
   return 0; 
} 
