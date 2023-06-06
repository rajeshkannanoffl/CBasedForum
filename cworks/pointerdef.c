#include <stdio.h>
#include <stdlib.h>
int main(){
	int a = 1, *p = NULL;
	p = &a;
	*p = 2;			//pointer deferencing
	printf("Value is: %d\n", a);
	exit(EXIT_SUCCESS);
}
