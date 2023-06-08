#include <stdio.h>
#include <stdlib.h>
int MaxNum(int num1, int num2){
	if (num1>num2){
		 return num1;
        } else {
		return num2;
        }
}
int MinNum(int num1, int num2){
	if(num1<num2){
		return num1;
	} else {
		return num2;
	}
}
int main(){
	int a, b, max, min;
	printf("Enter A: ");
	scanf("%d", &a);
	printf("Enter B: ");
        scanf("%d", &b);
	max = MaxNum(a,b);
	min = MinNum(a,b);
	printf("Maximum number is: %d\n", max);
	printf("Minimum number is: %d\n", min);
	exit(EXIT_SUCCESS);
}
