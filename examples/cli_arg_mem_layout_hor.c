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
draw_string_mem_layout(void *p, char *type, char **pp){

	switch(_draw_box(type)){

		case 'T':
			printf("  ----------------               ----------------                  --- \n");	
			printf(" | %p | --------->  | %p | -------------> | %c | \n", pp , p, *(char *)p);
			printf("  ----------------               ----------------                  --- \n");	
			break; 
		case 'L':
			printf("                                | %p | -------------> | %c | \n", p, *(char *)p);
			printf("                                 ----------------                  --- \n");	
			break;
		default :
			printf("Unknown character for draw_string_mem_layout \n");
			return 1; 
	}

	return 0 ; 
};

int
draw_cli_arg_mem(char str[], char **p){

	int len = strlen(str);
	int it = 0 ; 
	draw_string_mem_layout(str + it, "TOP", p);
	it++;
	
	if(len == 1){
	
		return 0;
	
	}

	for(; it < len; it++){
		draw_string_mem_layout(str + it, "middle", p);
	}

	return 0; 
}

int 
main(int argc, char* argv[]) {


	for(int i=0; i < argc; i++){
		draw_cli_arg_mem(*(argv + i) , (argv + i));
		printf("\n \n \n \n"); 
	};



	return 0; 

}
