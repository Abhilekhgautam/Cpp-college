#include<iostream>
using namespace std;

class B;
class A{
    int x;
    friend int add(A,B);
    public:
    A(int a = 0):x(a){}
};

class B{
    int y;
    friend int add(A,B);
    public:
    B(int b = 0):y(b){}
};

int add(A a,B b){
    int sum = a.x + b.y;
    return sum;
}

int main(){

A objA(5);
B objB(10);

int sum = add(objA,objB);
cout<<"The sum is :"<<sum<<'\n';

return 0;

}