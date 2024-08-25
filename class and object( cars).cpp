#include <iostream>
#include<string>
using namespace std;

class Car{
public:
    string brand;
    string model;
    int year;
    };
    int main(){
      //Create on object of Car
      Car carObj1;
      carObj1.brand="BMW";
      carObj1.model="X5";
      carObj1.year=1999;
      //Create an Object of Car
      Car carObj2;
      carObj2.brand="Audi";
      carObj2.model="R55";
      carObj2.year=2010;
     //Create an object of Car
     Car carObj3;
      carObj3.brand="Mahindra";
      carObj3.model="Thar";
      carObj3.year=2010;
      
      //Print attribute values
      cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<" \n";
      cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<" \n";
      cout<<carObj3.brand<<" "<<carObj3.model<<" "<<carObj3.year<<" \n";
      return 0;
    }
  
    