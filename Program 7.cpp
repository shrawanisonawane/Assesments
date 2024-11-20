#include <iostream>
using namespace std;
int main() {
int age;
bool hasDegree;
cout << "Enter age: "<<endl;
cin >> age;
cout << "Do you have a degree (1 for Yes, 0 for No): "<<endl;
cin >> hasDegree;
if (age > 18 && hasDegree) {
cout << "\nYou are eligible for the job." << endl;
} else {
cout << "\nYou are not eligible for the job." << endl;
}
return 0;
}