#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int num;

    cout << "Enter your lucky number\n";

    cin >> num;

    cout << "**************\n";
    cout << 2 * num + 1 << "\n";

    return 0;
}
