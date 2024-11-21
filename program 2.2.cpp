#include <iostream>
using namespace std;
class Student { 
  public:
string name;
int age; 
void display() { // 'void' is a keyword
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
}
};
int main() { 
Student s1; 
s1.name = "Shravani";
s1.age = 19;
s1.display(); 
return 0; 
}
