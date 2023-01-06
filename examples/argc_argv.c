#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("Argc: %i \n", argc);
	printf("Argv[0]: %s \n", argv[0]);
	printf("Third character for 1'st character array: %c \n", *(argv[0]+2));
	return 0;
}
