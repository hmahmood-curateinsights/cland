#include <stdlib.h>
#include <stdio.h>
#include <string.h>  

void
init_random_int_array(int arr[], int size, char *print){
	int i;
	for(i = 0; i < size; i++){
		*(arr + i) = rand();
		if(strcmp("true", print) == 0){
			printf("%d - %d\n", i, *(arr + i));
		};
	};
};