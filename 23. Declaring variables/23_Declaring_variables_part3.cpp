#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    double weight = -92.5;

    char group = 'd';

    bool is_male = true;
    bool like_football = false;

    int age = 55;
    string name = "mostafa";

    cout << "I am " << age << " years old \n";
    cout << "My weight is " << weight << "\n";

    cout << "My name is " << name << " and group " << group << "\n" 
        << is_male << " " << like_football << "\n";
    
    return 0;
}
