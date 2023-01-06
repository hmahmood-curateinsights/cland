#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {

	int* v = malloc(2*sizeof(int)) ;
	int* g ;
	int* k[20];
	int x = 5 ;
	*v = 20 ;
	g = (v+1) ;
	*g = x ;
	printf("%p -- %p -- %p \n", v, (v+1), &x) ;
	printf("%i -- %i -- %i\n", *v, *(v+1), *g) ;


	int* mm[2];
	mm[0] = 'a';
	printf("%p -- %p -- %p \n", mm , (mm+1), (mm+2));
	printf("%i \n", mm[0]);
	printf("%s \n", argv[1]);


	return 0 ;

}
