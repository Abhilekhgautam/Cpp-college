//demonstartion of typeid operator
#include<iostream>
#include<typeinfo>
using namespace std;

class A{
    //...
};

class B{
    //...
};

int main(){
    A obj;
    A obj1;

    B obj2;

    cout<<"The type of obj is "<<typeid(obj).name()<<'\n';//returns the type of object

    cout<<"The type of obj is "<<typeid(obj1).name()<<'\n';

    cout<<"The type of obj is "<<typeid(obj2).name()<<'\n';


    return 0;

}
