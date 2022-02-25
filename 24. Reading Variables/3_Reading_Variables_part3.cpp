#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int age;
    cout << "Enter age: ";
    cin >> age;

    double weight;
    cout << "Enter weight: ";
    cin >> weight;

    char group;
    cout << "Enter group: ";
    cin >> group;

    string name;
    cout << "Enter name: ";
    cin >> name;

    cout << "\n";

    cout << "I am " << name << " belongs to group " << group << "\n"
        << "My weight " << weight << " and age " << age << endl;

    return 0;
}
