#include <stdio.h>
#include <stdlib.h>

void 
func2(int a, int b){

	int c = 10; 
	int d = 11; 

	printf("###### START FUNC 2 ##############\n\n\n");
	printf("This is the function signature 'func2(int a, int b)' \nThe argument 'a' is passed before the argument 'b' in the function 'func2'\n\n\n");

	
	printf("The address of int a in the function 'func2': %p \nThe address of int b in the function 'func2': %p \n", &a, &b);
	printf("\n");
	printf(" _____ 				\n") ; 
	printf("|     |				\n") ; 
	printf("|  a  | - %p 		\n", &a) ; 
	printf("|_____|				\n") ; 
	printf("|     |				\n") ; 
	printf("|  b  | - %p 		\n", &b) ;
	printf("|_____|				\n") ; 
	printf("\n");
	printf("Inside the function 'func2', the argument that is passed first e.g. 'a' is placed higher in the activation record than 'b', which has a lower address\n");
	printf("\n");

	printf("The address of local int c in the function 'func2': %p \nThe address of local int d in the function 'func2': %p \n", &c, &d);

	printf("\n");
	printf(" _____ 				\n") ; 
	printf("|     |				\n") ; 
	printf("|  d  | - %p 		\n", &d) ; 
	printf("|_____|				\n") ; 
	printf("|     |				\n") ; 
	printf("|  c  | - %p 		\n", &c) ;
	printf("|_____|				\n") ; 
	printf("\n");
	printf("Inside 'func2' local function, the variable that is instantiated first e.g. 'c' is placed lower in the activation record than variable 'd', which has a higher address\n");
	printf("\n");

	printf("Notice that the local variables/arguments addresses are lower than the addresses of the variables in the 'main' thread.\n\nThe complete activation record for 'func2' looks like the following:\n");
	printf(" _____ 				\n") ; 
	printf("|     |				\n") ; 
	printf("|  d  | - %p 		\n", &d) ; 
	printf("|_____|				\n") ; 
	printf("|     |				\n") ; 
	printf("|  c  | - %p 		\n", &c) ;
	printf("|_____|				\n") ; 
	printf("|     |				\n") ; 
	printf("|  a  | - %p 		\n", &a) ; 
	printf("|_____|				\n") ; 
	printf("|     |				\n") ; 
	printf("|  b  | - %p 		\n", &b) ;
	printf("|_____|				\n") ; 
	printf(" \n\n\n");

	printf("####################\n");
};

int 
main(int argc, char* argv[]) {

	int a = 20;
	int b = 50; 

	printf("######### MAIN THREAD START ###########\n\n\n");
	printf("The variable 'a' is instantiated before variable 'b' in the 'main' thread\n\n\n");

	
	printf("The address of int 'a' in the 'main' thread: %p \nThe address of int 'b' in the 'main' thread: %p \n", &a, &b);
	printf("\n");
	printf(" _____ 				\n") ; 
	printf("|     |				\n") ; 
	printf("|  b  | - %p 		\n", &b) ; 
	printf("|_____|				\n") ; 
	printf("|     |				\n") ; 
	printf("|  a  | - %p 		\n", &a) ;
	printf("|_____|				\n") ; 
	printf("\n");
	printf("Inside the 'main' thread, the variable that is instantiated first e.g. 'a' is placed lower in the activation record than variable 'b', which has a higher address\n\n");


	printf("####################\n");



	func2(a, b);

	printf("########## CONCLUSION ##########\n");
	printf("\n");
	printf(" 1) The stack grows down meaning towards lower addresses. \n\n");
	printf(" 2) Placement of data on the stack is implementation dependent and up to the compiler. \n\n");
	printf(" 3) For functions, arguments passed should be placed higher on the stack frame (activation record) than local variables instantiated in the function body. However that is not the case for our current setup (WSL2).\n\n");
	printf(" 4) For functions, the last argument passed (order left to right) during the function call should be placed first on the stack frame (higher address), and the first argument passed should be placed at the bottom of the stack frame. However that is not the case for our current setup (WSL2).\n\n");
	return 0;
}
