#include <stdio.h>

#define DTYPE int


int main() {
	
	DTYPE x; 
	printf("%p - %p\n", &x, &x + 1);
	printf("size of DTYPE var: %ld bytes \n", sizeof(x));
	return 0;
}
