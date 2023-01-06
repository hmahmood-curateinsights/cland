#include <stdlib.h>
#include <stdio.h>
#include "stacks.h"


int 
int_stack_is_full(struct int_stack *s){
	return (s->max_size - 1) == s->cur; 
};

void 
int_stack_push(struct int_stack *s, int value){
	if(int_stack_is_full(s)){
		printf("Stack Overflow !!!! \n");
		exit(1);
	}else{
        	printf("Old value for sp : %d \n", s->cur);
		s->items[++s->cur] = value ;
		printf("Current value at the top of the stack: %d \n", s->items[s->cur]); 
		printf("New value for sp : %d \n", s->cur);
	}
};

void 
int_stack_new(struct int_stack_client *sc, int max_size){
	struct int_stack *s = (struct int_stack *)malloc(sizeof(struct int_stack));
	
	s->cur = -1; 
	s->max_size = max_size;
	s->items = (int *)malloc(max_size*(sizeof(int))); 
	sc->stack = s;
};


void int_stack_fill(struct int_stack_client *sc, int arr[]){
	int i; 
	struct int_stack *s = sc->stack;
	for(i = 0; i < s->max_size; i++){
		int_stack_push(s, *(arr + i));
	};
};

void int_stack_client_new(struct int_stack_client *sc){
	sc->int_stack_new = int_stack_new;
	sc->int_stack_is_full = int_stack_is_full;
	sc->int_stack_push = int_stack_push;
	sc->int_stack_fill = int_stack_fill;
};

