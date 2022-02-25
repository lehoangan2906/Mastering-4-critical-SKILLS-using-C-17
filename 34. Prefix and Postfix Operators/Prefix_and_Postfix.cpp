#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int a, b;

    // ++a: prefix increment: increment then assign
    a = 10;
    b = ++a;
    cout << a << " " << b << "\n";  // 11 11

    a = 10;
    cout << ++a << "\n"; // 11

    // a++: postfix increment: assign then increment
    a = 10;
    b = a++;
    cout << a << " " << b << "\n";   // 11 10
    // b's value is assigned to be a value first (which is 10), then increment a (11), then print out
    
    a = 10;
    cout << a++ << "\n";    // 10

    a = 10;
    cout << (a++) << "\n";  // 10

    a = 10;
   // cout << a++ + ++a << "\n";  // undefined

    return 0;
}
