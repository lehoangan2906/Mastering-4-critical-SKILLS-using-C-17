#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    /*
     * Given 8 space-separated integers, find the sum of those in even places and
       the sum of those in odd places.
       - Note: Even place means the 2nd, 4th, 6th or 8th numbers.
               Odd place are the 1st, 3rd, 5th and 7th numbers.
       - Note: The 8 numers will be on the same line
       - Note: Don;t print any welcome or by messages.
    */

    int a, b, c, d, e, f, g, h;

    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    cout << "Even place: " << b + d + f + h << "\n";
    cout << "Odd place: " << a + c + e + g << "\n";
    
    return 0;
}
