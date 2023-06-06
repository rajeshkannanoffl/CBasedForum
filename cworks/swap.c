#include <stdio.h>
int main(){
	int a, b, temp;
	printf("Enter two variable: ");
	scanf("%d %d", &a, &b);
	printf("Before Swapping:");
	printf("\n\ta = %d, b = %d\n", a, b);
	printf("After Swapping:");
	temp = a;
	a = b;
	b = temp;
	printf("\n\ta = %d, b = %d\n", a, b);
	return 0;
}
