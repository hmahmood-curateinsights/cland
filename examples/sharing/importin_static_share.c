#include <stdio.h>
#include <stdlib.h>

extern void func();



int main(){

	func(); // declared in share.h and defined in share.c
	
	extern int x; // declared in share.h and defined in share.c
	printf("value of x: %d \n", x); 

	return 0;

};


