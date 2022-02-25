#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int a, b;
    cout << "Input values for a and b: ";
    cin >> a >> b;

    cout << "a + b = " << a + b << "\n"
        << "a - b = " << a - b << "\n"
        << "a / b = " << a / b << "\n"
        << "a * b = " << a * b << "\n" << endl;

    return 0;
}
