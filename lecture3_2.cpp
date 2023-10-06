#include <iostream>
using namespace std;

string displayGrade(int marks) {
    if (marks >= 91 && marks <= 100) {
        return "AA";
    } else if (marks >= 81 && marks <= 90) {
        return "AB";
    } else if (marks >= 71 && marks <= 80) {
        return "BB";
    } else if (marks >= 61 && marks <= 70) {
        return "BC";
    } else if (marks >= 51 && marks <= 60) {
        return "CD";
    } else if (marks >= 41 && marks <= 50) {
        return "DD";
    } else if (marks <= 40) {
        return "Fail";
    } else {
        return displayGrade(marks - 1);
    }
}

int main() {
    int marks;
    
    cout << "Enter your marks ";
    cin >> marks;
    
    string grade = displayGrade(marks);
    cout << "grade is: " << grade << endl;
    
    return 0;
}
