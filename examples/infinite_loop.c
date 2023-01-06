#include <stdio.h>
#include <stdlib.h>


int 
main(int argc, char* argv[]) {
	
	// Stack grows down. 'aa' is at a higher address on the stack than 'bb'
	// The loop iterates down from bb2, bb1, bb0, and aa
	// 
 	
	int bb[3];
	int aa;
	for(aa=0; aa<=3; aa++){
		bb[2-aa]=0;
		printf("%p %p - %d %d - %d \n", &aa, (bb+aa), (int)&aa, (int)(bb+aa), aa);
	};
	return 0;
}
