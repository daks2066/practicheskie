#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Property{
  protected:
    int worth;

  public:
    Property(int worth){
      this->worth = worth;
    }

    virtual int tax() = 0;
};

class Appartment : public Property{
  public:
    Appartment(int worth) : Property(worth){}

    ~Appartment(){}

    int tax(){
      return(worth/1000);
    }
};

class Car : public Property{
  public:
    Car(int worth) : Property(worth){}

    ~Car(){}

    int tax(){
      return(worth/200);
    }
};

class CountryHouse : public Property{
  public:
    CountryHouse(int worth) : Property(worth){}

    ~CountryHouse(){}

    int tax(){
      return(worth/500);
    }
};

int main(){
  int sum=0;
  Property *things[7] = {
    new Appartment(100000),
    new Appartment(110000),
    new Appartment(111000),
    new Car(10000),
    new Car(11000),
    new CountryHouse(1000000),
    new CountryHouse(1100000)
    };
  for (int i=0; i<7; i++){
    sum+=things[i]->tax();
  }
  cout << sum;
}