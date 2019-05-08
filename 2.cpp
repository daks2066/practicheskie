#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float findZ(float a, float b){
  if (a < b){
    return( sqrt( abs(a*a-b*b) )  );
  } else {
    return( 1 - 2*cos(a)*sin(b) );
  }
}

float findT(float a, float b, float z){
  if (z < b){
    return( pow(z+a*a*b,1/3) );
  } else if(z == b){
    return( 1 - log10(z) + cos(a*a*b) );
  } else {
    return( 1/cos(z*a) );
  }
}

int main() {
  float a,b,z,t;
  cin >> a >> b;
  t = findT(a,b,findZ(a,b));
  cout << "\n" << findZ(a,b) << " " << t;
  return 0;
}