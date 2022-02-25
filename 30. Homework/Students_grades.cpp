#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    /*
     * Write a program that reads 2 students information about math exam
        - Read per student: name, id and grade
        - Then print them. See the picture
    * Be a good software engineer
        - Think deeply in your selected types
        - The teacehr gives us this dialogue to guide us
        - Be careful from your assumption?
            + Is exam's grade an integer?
    */

    string name1, name2;
    int id1, id2;
    int grade1, grade2;

    cout << "What is student 1 name: ";
    cin >> name1;
    cout << "His id: ";
    cin >> id1;
    cout <<"His math exam grade: ";
    cin >> grade1;

    cout << "What is student 2 name: ";
    cin >> name2;
    cout << "His id: ";
    cin >> id2;
    cout <<"His math exam grade: ";
    cin >> grade2;

    cout << "\nStudents grades in math \n" << name1 << " (with id " << id1 << ") got grade: " << grade1
        << "\n" << name2 << " (with id " << id2 << ") got grade: " << grade2 << "\n"
        << "Average grade is " << (grade1 + grade2)/2 << "\n";
    
    return 0;
}
