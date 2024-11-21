
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Please enter your age: "<<endl;
    cin >> age;
    if (age < 0 || age > 90) {
      cout << "Invalid age input. Please enter a valid age between 0 and 90." << endl;
    } else {
      cout << "Thank you! Your age is recorded as " << age << "." <<endl;
    }

    return 0;
}
