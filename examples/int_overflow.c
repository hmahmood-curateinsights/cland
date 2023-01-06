#include <stdio.h>


int
main(){
	int i = 2147483647;
	int j = 2147483647;
	printf("This is i: %i \n", i);
	printf("This is j: %i \n", j);
	printf("This is i*j: %f, %i \n", (double)i*j, i*j);
	return 0;
}
