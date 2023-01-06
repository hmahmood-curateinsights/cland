#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void 
print_string(char *str){
	printf("%s\n", str);
}

char 
_draw_box(char *type){
	
	if(strcasecmp(type, "top") == 0){
		return 'T';
	};

	if(strcasecmp(type, "middle") == 0 || strcasecmp(type, "bottom") == 0  ){
		return 'L';
	};

	printf("Received unknown string value: '%s' \n", type);

	exit(1);
}

int 
draw_box_pointer(void *p, char *type){

	switch(_draw_box(type)){

		case 'T':
			printf("  ----------------  \n");	
			printf(" | %p | \n", p);
			printf("  ----------------  \n");	
			break; 
		case 'L':
			printf(" | %p | \n", p);
			printf("  ----------------  \n");	
			break;
		default :
			printf("Unknown character for draw_box_pointer \n");
			return 1; 
	}

	return 0 ; 
};

int
draw_box_char(char *p, char *type){
	switch(_draw_box(type)){
		case 'T':
			printf("  ----  \n");	
			printf(" | %c | \n", *p);
			printf("  ----  \n");	
			break; 
		case 'L':
			printf(" | %c | \n", *p);
			printf("  ----  \n");	
			break;
		default :
			printf("Unknown character for draw_box_char \n");
			return 1; 
	}

	return 0 ; 

};

int 
draw_array_string(void *p, char *type){

	switch(_draw_box(type)){

		case 'T':
			printf("  ----------------                  --- \n");	
			printf(" | %p | -------------> | %c | \n", p, *(char *)p);
			printf("  ----------------                  --- \n");	
			break; 
		case 'L':
			printf(" | %p | -------------> | %c | \n", p, *(char *)p);
			printf("  ----------------                  --- \n");	
			break;
		default :
			printf("Unknown character for draw_array_string \n");
			return 1; 
	}

	return 0 ; 
};

int
draw_box_string(char str[]){

	int len = strlen(str);
	int it = 0 ; 
	draw_array_string(str + it, "TOP");
	it++;
	
	if(len == 1){
	
		return 0;
	
	}

	for(; it < len; it++){
		draw_array_string(str + it, "middle");
	}

	return 0; 
}

int 
main(int argc, char* argv[]) {


	for(int i=0; i < argc; i++){
		draw_box_pointer((argv + i), "TOP");
		printf("          |        \n");
		printf("          |        \n");
		printf("          |        \n");
		printf("          |        \n");
		printf("          |        \n");
		printf("          V        \n");
		draw_box_string(*(argv + i) );
		printf("\n \n \n \n"); 
	};



	return 0; 

}
