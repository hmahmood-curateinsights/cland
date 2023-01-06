#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x1[10]; 
	int x2[10];

	int *y[10];

	y[0] = &x1[0];
	y[1] = &x2[0];

	x1[0] = 200;
	x1[1] = 3340; 

	x2[0] = -400; 
	x2[1] = -1241; 

	printf("%i %p %p %p \n", *(y[0] + 1) , y , &x1, y[0]);

	printf(" This is  *(y[0] + 1)  : %i  \n", *(y[0] + 1) );
	printf(" This is  *(y[1] + 1)  : %i  \n", *(y[1] + 1) );
	printf(" This is  y            : %p  \n", y );
        printf(" This is  &y           : %p  \n", &y );
	printf(" This is  &x1          : %p  \n", &x1);
	printf(" This is  y[0]         : %p  \n", y[0] );
	printf(" This is  y[1]         : %p  \n", y[1] );	

	void *new = malloc(sizeof(int)); 

	printf(" This is  *new         : %p  \n", new );


	int **mat; 

	return 0; 
}
