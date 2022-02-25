#include<iostream>
using namespace std;

int main() {
	int x {6}, y {3};

	cout << x + y << "\n";			// 9
	cout << x + 2 * y - 1 << "\n";	// 11
	cout << x / y << "\n";			// 2

	int z1 = (x + y) / 3 / 3;		// 1
	cout << z1 << "\n";

	return 0;
}

