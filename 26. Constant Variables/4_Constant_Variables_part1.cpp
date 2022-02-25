#include <iostream>
#include <limits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    /*
     * Define once
     * Can't change later
     * Naming convention: Capital letters
     * C++ has some define limits
     * Why use const?
     *      Disallow a change
     *      Clear intentions
     */

    //Use capital letter
    const double PI = 3.14159;

    const int LUCKY = 13;

    // const int x;     CAN'T, you must assign value
    
    const char charVal = 'A';

    const string str = "Welcome to out Bank";

    // C++ limits as const
    cout << INT_MAX << "\n";
    cout << INT_MIN << "\n";

    return 0;
}
