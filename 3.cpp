#include <iostream>
#include <string>
using namespace std;

class student{
  private:
    int age;
    string group;
    int course;

  public:
    student(int ag, string grp, int crs){
      age = ag;
      group = grp;
      course = crs;
    }

    void show(){
      cout << age << " " << group << " " << course << "\n";
    }

    ~student(){
      cout << "student otchislen((((";
    }
};

int main(){
  return 0;
}
