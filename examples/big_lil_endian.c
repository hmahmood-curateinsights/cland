#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv) {

	int num = 1073741865; 
	char* num_char_ptr = (char *)&num ;

	printf("INT VALUE IS - %i \n\n", num);	
	// testing to see if integer value 41 is saved in the first byte, indicating that its a little endian system
	// the hex value for integer 41 is '0x29' equalling the character ')'
	if (*num_char_ptr == 0x29) { 
		printf("LITTLE ENDIAN SYSTEM - %c - %c \n", *num_char_ptr, (char)0x29 );
		printf("Value next to the character is - %c - %c \n", *(num_char_ptr + 1 ), (char)0x56 );   
	}
	printf("%i \n", (int)*(num_char_ptr + 1)); 

	return 0;
}
