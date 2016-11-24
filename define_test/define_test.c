#include <stdio.h>

#define c 1
#define b 2




int main(){


#ifdef a 
	printf("1\n");
#elif b
	printf("2\n");
#else
	printf("3\n");
#endif

#ifndef a
	printf("1\n");
#endif
	return 0;
}