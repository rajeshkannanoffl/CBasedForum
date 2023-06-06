#include <stdio.h>
int main(){
	int a, *ap = &a;
	printf("Enter a variable: ");
	scanf("%d", &a);
	printf("Entered Variable is: %d\n", a);
	printf("Entered Variable's Address: %p\n", ap);
}
