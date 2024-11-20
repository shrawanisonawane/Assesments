#include <iostream>
using namespace std;
int main() {
int a = 20, b = 25, c = 45;
// Logical AND
cout << "Logical AND (a > b && b < c): " << (a > b && b < c)
<< endl;
// Logical OR
cout << "Logical OR (a < b || b < c): " << (a < b || b < c)
<< endl;
// Logical NOT
cout << "Logical NOT (!(a > b)): " << !(a > b) << endl;
return 0;
}