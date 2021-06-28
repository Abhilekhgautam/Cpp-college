#include<iostream>
using namespace std;

class A{
    int x;
    friend void display(A);
    public:
    A(int x = 0):x(x){}
};

void display(A a){
  cout<<a.x<<'\n';
}

int main(){
    A obj(8);
    display(obj);
    return 0;
}