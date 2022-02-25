#include<iostream>
using namespace std;

int main() {

	double a { 3.0 / 7.0 };
	double b { 1 + 3.0 / 7.0 - 1 };

	//0.428571 0.428571 0 SURPRISE SOMETIMES not 1
	cout<<a<<" "<<b<<" "<<(a == b)<<"\n";

	a = 5.0, b = 4.99999999999999999;

	//5 5 1 SURPRISE SOMETIMES not 0
	cout<<a<<" "<<b<<" "<<(a == b)<<"\n";

	// Never compare doubles for equality directly

	return 0;
}

