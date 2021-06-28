//basic demo of this pointer
#include<iostream>
using namespace std;

class A{
  int a;
public:
//constructor
  A(int x = 0):a(x){}
  void display() const{

  /*Every non-static member function has excess to the 'this' pointer which points
  the object for which the function was invoked*/
    cout<<this->a<<'\n';
 }
};

int main(){

  A objA(10);
  A objB(11);

  objA.display();
  objB.display();

  return 0;
}
