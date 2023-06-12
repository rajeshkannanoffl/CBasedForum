#include <iostream>
using namespace std;
void SwapInt(int a, int b){
	int temp;
	cout << "Before Swapping: "<<endl;
	cout << "\tA = " << a << ": B = " << b << endl;
	cout << "After Swapping: "<<endl;
	temp = a;
	a = b; 
	b = temp;
	cout << "\tA = " << a << ": B = " << b << endl;
}

int main(){
	int a, b;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
        cin >> b;
	SwapInt(a,b);
	return 0;
}
