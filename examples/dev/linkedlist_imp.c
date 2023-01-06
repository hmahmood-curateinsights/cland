#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"


#define SIZE 20000
#define VERBOSE "false"

extern void init_random_int_array(int [], int , char *);


int 
main(){

	struct node_int *n = new_node_int(2);
	struct node_int *n_insert = new_node_int(3);


	printf("The value of n.item should be 2: %d \n", n->item );

	struct linked_list_int *lsi = new_linked_list_int(1);

	printf("The value of lsi.head.item should be 1: %d \n", (lsi->head)->item );
	printf("The value of lsi.size should be 1: %d \n", lsi->size );

	addnode_linked_list_node_int(lsi, n);

	traverse_linked_list_int(lsi);


	addnode_linked_list_node_int_i(lsi, n_insert, 1);


	n = new_node_int(-21313);
	addnode_linked_list_node_int_i(lsi, n, 0);

	traverse_linked_list_int(lsi);


	int arr[SIZE-1];
	init_random_int_array(arr, SIZE-1, VERBOSE);
	printf("\n\nSTARTING BIG LINKED LIST EXAMPLE\n\n");
	printf("Specs\n - Size: %d\n - Verbose: %s\n\n", (int)SIZE, VERBOSE);

	free(lsi);
	long test = 20000000000;
	lsi = new_linked_list_int(0);
	for(int i=0; i < test; i++){
		n = new_node_int(i+1);
		addnode_linked_list_node_int_i(lsi, n, lsi->size);
	};

	printf("INFO - Verifying that the logic fucntions properly.\nINFO - linked list should be printed 0 - %d\n", SIZE - 1 ); 
	printf("\n");
	traverse_linked_list_int(lsi);
	printf("\n\n");

	printf("INFO - now running example for random array of ints\n\n");
	lsi = new_linked_list_int(rand());
	for(int i=0; i < SIZE - 1; i++){
		n = new_node_int(*(arr+i));
		addnode_linked_list_node_int_i(lsi, n, lsi->size);
	};
	traverse_linked_list_int(lsi);

	printf("\n\nENDING BIG LINKED LIST EXAMPLE\n\n");

	return 0; 
}