#include <stdlib.h>
#include <stdio.h>

#define SIZE 10

struct node { 
	int value;
	struct node *next;  
}; 

void init_random_int_array(int arr[], int arrSize){
	int i;
	for(i = 0; i < arrSize; i++){
		*(arr + i) = rand();
	};
};

void create_linked_list(struct node *head, int *arr[]  , int arrSize ){
		
	
};



int main(int argc, char* argv[]) {
	int arr[SIZE];
	init_random_int_array(arr, SIZE);
	return 0;
}
