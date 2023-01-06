#include <stdio.h>


int main(int argc, char *argv[]) {

	int x = 10; 

	void *v ; 

	v = &x; 
	// v = (int *)v;

	printf("%i \n", *(int *)v); 

	return 0;

}
