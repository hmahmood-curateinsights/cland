#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"




struct node_int * 
new_node_int(int item){
	
	struct node_int *n = (struct node_int *)malloc(sizeof(struct node_int)) ; 
	
	n->item = item;

	return n;
};

struct linked_list_int * 
new_linked_list_int(int item){

	struct linked_list_int *lsi = (struct linked_list_int *)malloc(sizeof(struct linked_list_int)) ; 

	struct node_int *n;

	n = new_node_int(item);

	lsi->head = n;
	lsi->size = 1;	

	return lsi;
};


int 
addnode_linked_list_node_int(struct linked_list_int *lsi, struct node_int *n){

	if( lsi->head == NULL ){
		
		return FAILURE_CODE;
	
	} ;

	struct node_int *current_n; 
	current_n = lsi->head; 

	while(current_n->next != NULL){
		current_n = current_n->next;
	}

	current_n->next = n;
	lsi->size++;


	return SUCCESS_CODE;
};

int 
addnode_linked_list_node_int_i(struct linked_list_int *lsi, struct node_int *n, int i){
	if( lsi->head == NULL || i > lsi->size ){
		
		return FAILURE_CODE;
	
	};

	struct node_int * old_n;
	struct node_int * current_n; 

	if(i==0){

		printf("Attaching new head to linked list with address - %p. Old head address - %p \n", n , lsi->head); 
		
		old_n = lsi->head ; 
		n->next = old_n ;
		lsi->head = n ;  

		lsi->size++;

		return SUCCESS_CODE ; 

	}; 


	current_n = lsi->head ; 

	for(int j=0; j < (i-1); j++){

		current_n = current_n->next; 

	};

	n->next = current_n->next ;
	current_n->next = n;
	lsi->size++;

	return SUCCESS_CODE; 



};



int 
traverse_linked_list_int(struct linked_list_int * lsi){
	if( lsi->head == NULL ){

		printf("Linked list is empty! Returning failure \n");
	
		return FAILURE_CODE;
	} ;

	struct node_int *current_n; 
	current_n = lsi->head; 

	printf("0 - Head at address %p with item: %d \n", current_n, current_n->item);

	int i = 0 ; 

	while(current_n->next != NULL){
		current_n = current_n->next; 
		printf("%d - Node at address %p with item: %d \n", ++i, current_n, current_n->item);
	};

	return SUCCESS_CODE; 

};


// void 
// int_stack_new(struct int_stack_client *sc, int max_size){
// 	struct int_stack *s = (struct int_stack *)malloc(sizeof(struct int_stack));
	
// 	s->cur = -1; 
// 	s->max_size = max_size;
// 	s->items = (int *)malloc(max_size*(sizeof(int))); 
// 	sc->stack = s;
// };



// int 
// int_stack_is_full(struct int_stack *s){
// 	return (s->max_size - 1) == s->cur; 
// };

// void 
// int_stack_push(struct int_stack *s, int value){
// 	if(int_stack_is_full(s)){
// 		printf("Stack Overflow !!!! \n");
// 		exit(1);
// 	}else{
//         	printf("Old value for sp : %d \n", s->cur);
// 		s->items[++s->cur] = value ;
// 		printf("Current value at the top of the stack: %d \n", s->items[s->cur]); 
// 		printf("New value for sp : %d \n", s->cur);
// 	}
// };

// void int_stack_fill(struct int_stack_client *sc){
// 	int i; 
// 	struct int_stack *s = sc->stack;
// 	for(i = 0; i < s->max_size; i++){
// 		int_stack_push(s, *(s->items + i));
// 	};
// };

// void int_stack_client_new(struct int_stack_client *sc){
// 	sc->int_stack_new = int_stack_new;
// 	sc->int_stack_is_full = int_stack_is_full;
// 	sc->int_stack_push = int_stack_push;
// 	sc->int_stack_fill = int_stack_fill;
// };

