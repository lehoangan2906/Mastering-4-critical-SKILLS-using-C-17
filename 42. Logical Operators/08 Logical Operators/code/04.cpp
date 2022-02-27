#include<iostream>
using namespace std;

int main() {

	int x { 10 };

	// (x+= 50 > 10) is discarded
	x < 100 || (x+= 50 > 10);

	// (++x > 10) is discarded
	x == 20 && (++x > 50);

	// (++x > 10) is discarded, but (x > 0) eval
	(x == 20) && (++x > 50) || (x > 0);

	// X still 10
	// All evaluated
	(x == 10) && ((++x > 50) || (x > 0));

	// X now 11

	return 0;
}

