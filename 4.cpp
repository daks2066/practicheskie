#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void hoba(int *arr){
  for (int i=0; i<11; i+=2){
    swap(arr[i],arr[i+1]);
  }
}

int main(){
  srand(time(NULL));
  int *arr = new int[12];
  for (int i=0; i<12; i++){
    arr[i] = rand()%10;
    cout << arr[i] << " ";
  }
  hoba(arr);
  cout << "\n";
  for (int i=0; i<12; i++){
    cout << arr[i] << " ";
  }
  return 0;
}
