#include <stdio.h>


int main() {
	
	int x; 
	x = 0; 
	//printf("%d \n", ++x ); 
        //printf("%d \n", ++x );	
	printf("Testing the x++ operation. x = %d \n", x);
	for(int i = 0; i < 10; ++i){
		printf("%d \n", x++);
	};
	x = 0 ;
	printf("\n \n \n");
	printf("Testing the ++x operation. x = %d \n", x);
        for(int i = 0; i < 10; i++){
                printf("%d \n", ++x);
        };
	return 0;
}
