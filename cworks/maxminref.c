#include <stdio.h>
#include <stdlib.h>
void MaxMin(int num1, int num2, int *pMax, int *pMin){
	if (num1>num2){
		 *pMax = num1;
		 *pMin = num2;
        } else {
		*pMax = num2;
		*pMin = num1;
        }
}
int main(){
	int a, b, max, min;
	printf("Enter A: ");
	scanf("%d", &a);
	printf("Enter B: ");
	scanf("%d", &b);
	MaxMin(a,b,&max,&min);
	printf("Maximum number is: %d\n", max);
	printf("Minimum number is: %d\n", min);
	exit(EXIT_SUCCESS);
}
