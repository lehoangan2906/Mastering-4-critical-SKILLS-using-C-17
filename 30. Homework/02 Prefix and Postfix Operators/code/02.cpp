#include<iostream>
using namespace std;

int main() {

	int a, b;

	// --a: prefix decrement: decrement then assign
	a = 10;
	b = --a;
	cout<<a<<" "<<b<<"\n";	// 9 9

	a = 10;
	cout<<--a<<"\n";	// 9

	// a--: postfix decrement: assign then decrement
	a = 10;
	b = a--;
	cout<<a<<" "<<b<<"\n";	// 9 10

	a = 10;
	cout<<a--<<"\n";	// 10

	a = 10;
	cout<<(a--)<<"\n";	// 10

	a = 10;
	cout<<a-- + --a<<"\n";	// undefined


	return 0;
}

