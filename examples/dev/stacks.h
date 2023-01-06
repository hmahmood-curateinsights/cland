

struct int_stack {
        int max_size;
        int cur ;
        int *items ; 
};
struct int_stack_client ;


void int_stack_new(struct int_stack_client *, int);
int int_stack_is_full(struct int_stack *);
void int_stack_push(struct int_stack *, int);
void int_stack_fill(struct int_stack_client *, int []);
void init_sc(struct int_stack_client *);

struct int_stack_client {
	struct int_stack *stack;
	void (*int_stack_new)(struct int_stack_client *, int);
	int (*int_stack_is_full)(struct int_stack *);
	void (*int_stack_push)(struct int_stack *, int);
	void (*int_stack_fill)(struct int_stack_client *, int []);
} ;

void int_stack_client_new(struct int_stack_client *);




