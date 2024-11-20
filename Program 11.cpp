#include <iostream>
using namespace std;
int main() {
int age;
cout << "Enter your age: "<<endl;
cin >> age;

string eligibility = (age >= 18) ? "Eligible to vote" : "Not eligible to vote";
cout << eligibility << endl;
return 0;
}