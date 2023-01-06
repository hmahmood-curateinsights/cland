#define SUCCESS_CODE 0
#define FAILURE_CODE 1


struct node {
	void *item;
	int item_size;
	struct node *next;
}; 

struct node_int {
    int item; 
    struct node_int *next;
};

struct linked_list_int {
		struct node_int *head;
		int size;
};


struct node_int * new_node_int(int);
struct linked_list_int * new_linked_list_int(int);


int addnode_linked_list_node_int(struct linked_list_int *, struct node_int *);
int addnode_linked_list_node_int_i(struct linked_list_int *, struct node_int *, int);

int traverse_linked_list_int(struct linked_list_int *);


// void int_linked_list_new(struct int_stack_client *, int);
// int int_stack_is_full(struct int_stack *);
// void int_stack_push(struct int_stack *, int);
// void int_stack_fill(struct int_stack_client *);
// void init_sc(struct int_stack_client *);

// struct int_stack_client {
// 	struct int_stack *stack;
// 	void (*int_stack_new)(struct int_stack_client *, int);
// 	int (*int_stack_is_full)(struct int_stack *);
// 	void (*int_stack_push)(struct int_stack *, int);
// 	void (*int_stack_fill)(struct int_stack_client *);
// } ;

// void int_stack_client_new(struct int_stack_client *);




