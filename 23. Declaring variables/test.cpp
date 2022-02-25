#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    // C1:
    //
    // bool behind the scene is just int with value 0 or 1
    // - We can assign a boolean an integer, no error
    // - Only zero value will make a boolean variable false. 
    // Otherwise (positive or negative), make it one
   
    bool b1 = -10, b2 = 0, b3 = 10;
    cout << b1 << b2 << b3;

    // C2:
    //
    cout << (3 + 7) / 2 << " " << 3 / 2 + 7 / 2 << "\n";
    
    // C3:
    //
    cout << (3 + 7.0) / 2 << " " << 3.0 / 2 + 7 / 2 << "\n";
    return 0;
}
