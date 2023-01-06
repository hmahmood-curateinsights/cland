#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int vint = 20;
	int vint_1 = 4241;
	void *vptr = malloc(2*sizeof(int));
	
	memcpy(vptr, &vint, sizeof(int));
	memcpy((vptr + sizeof(int)), &vint_1 ,sizeof(int));
	
	printf("This is *vptr and vptr: %i , %p \n", *(int *)vptr, vptr);  
	printf("This is *(vptr + 4) and vptr + 4 : %i , %p \n", *(int *)(vptr + 4) , vptr + 4);
	return 0; 
}
