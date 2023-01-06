#include <stdio.h>
#include <stdlib.h>

#define DTYPE int

struct 
test_return_struct {
        int x ;
        int y[10] ;

};


struct test_return_struct 
func(int x){
	printf("%d \n",x);
	struct test_return_struct t; 
	t.y[0]=23123;

	printf("%p \n", &t);

	return t;
};



int 
main(int argc, char* argv[]) {
	struct test_return_struct t = func(19);
	printf("%p - %d \n", &t, t.y[0]);
	//printf("%p %p - %d %d \n", aa, &bb, (int)aa, (int)&bb);
	return 0;
}
