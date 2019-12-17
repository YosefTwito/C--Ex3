#include <stdio.h>
#include "insort.h"
#define size 50

int s=0;

int main(){

        int arr[size];
       
        for(int i=0 ; i<size; i++){
        	scanf("%d" ,&s);
		*(arr+i)=s;
	}

	int n = sizeof(arr)/sizeof(int);
	insertion_sort(arr, n);

	int x=0;
	for(x=0; x<size-1; x++){
		printf("%d,", *(arr+x));
	}

	printf("%d\n", *(arr+x));

return 0;
}
