#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Row {
	int ncols;
	void *data;
	int datacellsize; 
} ;   

struct Matrix {
	int nrows; 
	struct Row **rows;  	
} ;



void init_row(struct Row *r, void *arr) {
	int cols = r->ncols ; 
	int elemSize = r->datacellsize; 

	printf("This is the size being requested: %i  \n", elemSize*cols);
	void *temp_data = malloc(elemSize*cols);

	for(int i=0; i < cols; i++){
		memcpy(( temp_data + i*elemSize), (arr + i*elemSize )  , elemSize);
	} 
	r->data = temp_data;		
}


void init_randomint_row(struct Row *r) {
        int cols = r->ncols ;
        int elemSize = r->datacellsize ;

        void *temp_data = malloc(elemSize*cols);
	printf("This is the size being requested: %i  \n", elemSize*cols);
	if( temp_data == NULL ){
		while( temp_data == NULL ){
			printf("addr for temp_data: %p ", temp_data);
			temp_data = malloc(elemSize*cols);
			exit(1);
		};
	};
	int rand_int; 
        for(int i=0; i < cols; i++){
		rand_int = random();
                memcpy(( temp_data + i*elemSize), &rand_int , elemSize);
        }; 
        r->data = temp_data;
}


int main() {
	
	struct Row r;
	r.ncols = 10;
	r.datacellsize = sizeof(int);
	
	int arr[r.ncols] ;	

	for(int i=0; i < r.ncols; i++){
		arr[i] = random();
	};
	
	init_randomint_row(&r); 
	

	init_row( &r , &arr); 
	
	struct Matrix mat;
	// mat->rows = &r; 

	int elemSize = r.datacellsize; 
	for(int i=0; i < r.ncols; i++){
		printf("This is (addr, value) : (%p, %i) \n", (r.data + i*elemSize)  , *(int *)(r.data + i*elemSize)  );
	}
	
	int nrows = 10; 
	struct Row *rows[nrows] ; 

	for(int i=0; i < nrows; i++) {
		printf("This is addr of rows %i: %p   \n", i, (rows+i))	 ;
		struct Row tempr;
		tempr.ncols = 10;
		tempr.datacellsize = sizeof(int);
		init_randomint_row(&tempr);
		rows[i] = &tempr;  
	
	
	} ; 

	printf("This is value in collection of rows: %i \n", **rows); 

	int v = random();


	return 0;
}
