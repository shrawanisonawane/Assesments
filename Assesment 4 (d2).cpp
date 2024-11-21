#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: "<<endl;
    cin >> number;

    if (number > 0) {
        if (number % 2 == 0) {
            cout << "The number is positive and even." << endl;
        } else {
            cout << "The number is positive and odd." << endl;
        }
    } else if (number == 0) { 
        cout << "The number is zero." << endl;
    } else { r
        if (number % 2 == 0) {
            cout << "The number is negative and even." << endl;
        } else {
            cout << "The number is negative and odd." << endl;
        }
    }
 return 0;
}

