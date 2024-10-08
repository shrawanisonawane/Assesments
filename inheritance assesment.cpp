
#include <iostream>
using namespace std;

class Vehicle{
  public:
  void vehicle(){
    cout<<"I am a Vehicle."<<endl;
  }
};
class TwoWheeler: public Vehicle{
  public:
  void twoWheeler(){
    cout<<"I have two wheels."<<endl;
  }
};
class Bike: public TwoWheeler{
  public:
  void bike(){
    cout<<"I am a bike."<<endl;
  }
};
int main(){
  
  Bike mybike;
  mybike.bike();
  mybike.twoWheeler();
  mybike.vehicle();
  return 0;
}