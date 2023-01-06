#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DTYPE int

void print_string(char *str){
	printf("%s\n", str);

}

int 
main(int argc, char* argv[]) {
	
	char *str = "This is test string 1";
	char *str2[] = {"This is test string 2"};

	for(int i=0; i<5; i++){
		printf("%s \n", str2[0]);
		printf("%s \n", str);
		printf("%c %c \n", str[i], (*str2)[i] );
		if(str == "This is test string 1"){
			printf("%s", "true!!\n");
		};
		print_string("######################");
	}

	print_string("Hey print the string");
	
	char *t[] = {"Hello my name\n", "Is Hassan\n"};
	printf("%s  %s", *t, *(t+1));

	char *x[] = {"qwewqwqe","aaaa"};
	printf("%c %c \n", *x[0], *(x[0]+1) );

	
	char *xx = "hello world this is printed from while loop\n";
	while(*xx != '\0'){
		printf("%c", *xx );
		xx++;
	};

	char *testing = "Hello";

        printf("Test on 01/02/2023 - pointer to argv      - %p \n", argv);
        printf("Test on 01/02/2023 - pointer to argv + 1  - %p \n", argv+1);
	printf("Test on 01/02/2023 - address to first arg character array - %p \n", *argv);
        printf("Test on 01/02/2023 - address to secon arg character array - %p \n", *(argv+1));

	printf("Test on 01/02/2023 - second arg 1'st charac - %c \n", **(argv+1));
        printf("Test on 01/02/2023 - second arg 2'nd charac - %c \n", *(*(argv+1)+1));

        printf("Test on 01/02/2023 - %c \n", **argv);
	printf("Test on 01/02/2023 - %p %p\n", ((*argv+1)+0),((*argv+1)+1));
        printf("Test on 01/02/2023 - %c %c\n", *((*(argv+1))+0),*((*(argv+1))+1));
	printf("Test on 01/02/2023 - %s\n", testing);
	
	
	
	if(strcmp(testing, "Hello") == 0){
		printf("In the blcok \n");
	}

	return 0;
}
