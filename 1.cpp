#include <iostream>
#include <string>
using namespace std;

int chisla(int a, int b, bool c){
  if (c == true){
    return(a+b);
  } else {
    return(a-b);
  }
}

void privet(){
  string nm;
  cin >> nm;
  cout << "\n" << "Привет " << nm << "\n";
}

int main() {
  int a,b;
  bool c;
  privet();
  cin >> a >> b;
  cin >> c;
  cout << chisla(a,b,c);
  return 0;
}