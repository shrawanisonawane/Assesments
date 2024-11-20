#include <iostream>
using namespace std;
int globalVar = 90; // Global variable
int main() {
int localVar = 80; // Local variable
static int staticVar = 5; // Static variable
cout << "Global Variable: " << globalVar << endl;
cout << "Local Variable: " << localVar << endl;
staticVar++;
cout << "Static Variable: " << staticVar << endl;
return 0;
}