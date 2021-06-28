#include<iostream>
using namespace std;

class B;
class A{
int x;
public:
A(int a = 0):x(a){}
int add(B);
};

class B{
    int y;
    public:
    B(int b = 0):y(b){}
    friend int A::add(B);
};

int A::add(B b){

return (x+b.y);

}

int main(){

A objA(5);
B objB(10);

int sum = objA.add(objB);

cout<<"The sum is :"<<sum<<'\n';

return 0;

}