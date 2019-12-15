#include <stdio.h>
#include "insort.h"
#define size 50

int s=0;

int main(){

        int arr[size];
	printf("****** Insertion sort ****** \n\nPlease insert %d numbers:\n" , size);
       
        for(int i=0 ; i<size; i++){
        	scanf("%d" ,&s);
		*(arr+i)=s;
	}

    
	printf("\nOriginal array:\n");
	int x;
	for(x=0; x<size-1; x++){
		printf("%d,", *(arr+x));
	}
	printf("%d\n", *(arr+x)); 
    
	//shift_element(arr, 3);
	int n = sizeof(arr)/sizeof(int);
	insertion_sort(arr, n);

	printf("\nSorted array:\n");
	for(x=0; x<size-1; x++){
		printf("%d,", *(arr+x));
	}

	printf("%d\n", *(arr+x));

return 0;
}
