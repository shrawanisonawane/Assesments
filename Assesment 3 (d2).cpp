#include <iostream>
using namespace std;
int main() {
int score;
cout << "Enter the score (0-100): "<<endl;
cin >> score;
if (score >= 95) {
  cout<<"Grade: A+"<<endl;
}else if(score >=90){
cout << "Grade: A" << endl;
} else if (score >= 80) {
cout << "Grade: B" << endl;
} else if (score >= 70) {
cout << "Grade: C" << endl;
} else if (score >= 60) {
cout << "Grade: D" << endl;
} else {
cout << "Grade: F" << endl;
}
return 0;
}
