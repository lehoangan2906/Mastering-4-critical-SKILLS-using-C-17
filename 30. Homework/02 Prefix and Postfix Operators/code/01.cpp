#include<iostream>
using namespace std;

int main() {

	int a, b;

	// ++a: prefix increment: increment then assign
	a = 10;
	b = ++a;
	cout<<a<<" "<<b<<"\n";	// 11 11

	a = 10;
	cout<<++a<<"\n";	// 11

	// a++: postfix increment: assign then increment
	a = 10;
	b = a++;
	cout<<a<<" "<<b<<"\n";	// 11 10

	a = 10;
	cout<<a++<<"\n";	// 10

	a = 10;
	cout<<(a++)<<"\n";	// 10

	a = 10;
	cout<<a++ + ++a<<"\n";	// undefined


	return 0;
}

