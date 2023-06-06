#include <stdio.h>
void swap(int *a, int *b){
	int *temp;			//pointer temp variable
	printf("Before Swapping:\n");
	printf("\ta = %d b = %d\n", *a, *b);
	temp = a;
	a = b;
	b = temp;
	printf("After Swapping:\n");
	printf("\ta = %d b = %d\n", *a, *b);
}
int main(){
	int n1, n2, *pn1 = &n1, *pn2 = &n2;
	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);
	swap(pn1, pn2);			//calling swap function
	return 0;
}
