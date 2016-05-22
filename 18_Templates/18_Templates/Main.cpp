#include <iostream>
using namespace std;
template <class X> void swapargs(X &a, X &b) {
	X temp;
	temp = a;
	a = b;
	b = temp;
}
void swapargs(int a, int b) {
	cout << "Overloading" << endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
}


int main() {
	int i = 10, j = 20;
	float x = 10.1f, y = 23.3f;
	cout << "Original i, j " << i  << ", "<< j << endl;
	cout << "Original x, y " << x << ", " << y << endl;
	swapargs(i, j);
	swapargs(x, y);
	cout << "Swapped i, j " << i << ", " << j << endl;
	cout << "Swapped x, y " << x << ", " << y << endl;
	return 0;
}