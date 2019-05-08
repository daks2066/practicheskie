#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class figure{
  protected:
    int angles;
  
  public:
    figure(){}

};

class square : public figure{
  protected:
    int diagonal;
  public:
    square(int diagonal, int side) {
      this->diagonal = diagonal;
      angles = 4;
    }

  ~square(){}

};

class rhomb : public square{
  protected:
    int height;
    int width;
  
  public:
    rhomb(int diagonal, int height, int width) : square(diagonal,angles) {
      this->height = height;
      this->width = width;
    }
};

class rectangle : public square{
  private:
    int sq;
  public:
    rectangle(int diagonal,int sq) : square(diagonal,angles){
      this->sq = sq;
    }

    int ra(){
      return angles;
    }
};

int main(){
  rectangle rec(5,10);
  cout << rec.ra();
}