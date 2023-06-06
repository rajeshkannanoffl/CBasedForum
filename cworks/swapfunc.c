#include <stdio.h>
void swap(int a, int b){
        int temp;
        printf("Before Swapping:\n");
        printf("\ta = %d, b = %d\n", a, b);
        temp = a;
        a = b;
        b = temp;
        printf("After Swapping:\n");
        printf("\ta = %d, b = %d\n", a, b);
}
int main(){
	int a, b;
	printf("Enter Variables : ");
	scanf("%d %d", &a, &b);
	swap(a,b);
	return 0;
}