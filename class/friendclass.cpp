#include<iostream>
using namespace std;

class A;

class B{
    int k;
    friend class A;// class A is an friend of class B.
};

class A{
  int j;
  public:
    void input(B&);
    void swap(B&);
    void output(B);
};

void A::input(B& objB){
    cout<<"Enter J and k"<<'\n';
    cin>>j>>objB.k;
}

void A::output(B objB){
    cout<<"J ="<<j<<'\n'<<"k ="<<objB.k<<'\n';
}

void A::swap(B& objB){
    int temp;
    temp = j;
    j = objB.k;
    objB.k = temp;
}

int main(){
A objA;
B objB;

objA.input(objB);
cout<<"Before Swap"<<'\n';
objA.output(objB);
objA.swap(objB);
cout<<"After Swap"<<'\n';
objA.output(objB);

return 0;
}
