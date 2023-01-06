#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *f_handle;	
	printf("%s \n", "New Build");
	f_handle = fopen("test.txt","r"); 
	char string[100];
	fscanf(f_handle , string);
	char c, cc; 
	do {
		c = getc(f_handle);
		cc = fgetc(f_handle); 
		printf("%c%c", c,cc );
	} while(c != EOF);
	printf("\n");

	// code doesn't work as expected
	//char string[100];
	//rewind(f_handle);
	//fscanf(f_handle, string); 
	//printf("here is the whole string: '%s' \n", string); 

	fclose(f_handle);
	return 0;
}
