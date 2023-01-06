#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]){
 
	int x[] = {1,2,3,4,5};
	int *y[] = {x, x};
	int **z = y; 
	// int **y ; 
	// y = &x;
	// (y+1) = &x;   

	*(*z+1) = 20 ; 
	printf("x[0] = %d\n", x[1]);
	return 0;
}