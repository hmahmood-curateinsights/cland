#include <stdio.h>




static void function_in_imported_module() {
	printf("Hello World - function in imported module being printed \n");
	printf("New lines\n");
}

void imported_function() {
	function_in_imported_module();
}
