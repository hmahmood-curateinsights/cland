
struct Node {
	struct Node *parent;
	struct Node *left_child; 
	struct Node *right_child; 
	void *item; 
	int item_size;
};


void set_node(struct Node* n, struct Node* p, struct Node* rc, 
	struct Node* lc, void* item, int item_size) ; 
