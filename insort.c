#include <stdio.h>
#include "insort.h"

void shift_element(int *arr, int i){
	int j=i;
	while(j>0){
		*(arr+j)=*(arr+(j-1));
		j--;
	}
}

void insertion_sort(int *arr, int len){  
	int i, key, j;  
	for (i=1; i<len; i++){
		key = *(arr+i);  
		j = i-1;  

		while (j>=0 && *(arr+j)>key){  
			*(arr+(j+1)) = *(arr+j) ;  
			j--;;  
		}  
	*(arr+(j+1)) = key;  
	}    
}
