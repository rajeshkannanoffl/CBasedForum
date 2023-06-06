#include <stdio.h>
#include <stdlib.h>
int main(){
	int a = 1, *pa = &a;
	int *pa2;
	int *pa1 = NULL;
	pa1 = &a;
	printf("Value of a variable = %d\n", a);
	printf("Address of a variable = %p\n", pa);
	printf("Address of Pointer A (With NULL) = %p\n", pa1);
	printf("Address of Pointer A (Without NULL) = %p\n", pa2);
	exit(EXIT_SUCCESS);
}
