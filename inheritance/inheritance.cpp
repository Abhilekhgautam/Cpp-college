//Demonstartion of Basic inheritance

/*
Since classes represent a concept and a concept cannot remain in void
so inheritance helps to derive relation between various class
*/

#include<iostream>
using namespace std;

class Employee{
    string first_name,family_name;
    int department;
    public:
    void print();
};
class Manager:public Employee{
    public:
    void print();//overrides Employee::print()
};
void Employee::print (){
    cout<<"Hello from print function of Employee Class"<<'\n';
}

void Manager::print (){
    cout<<"Hello from print function of Manager Class"<<'\n';
}

class Director:public Manager{

public:
void print();
};

void Director::print(){
    cout<<"Hello from print function of Director Class"<<'\n';
}

int main(){
    Director obj;
    obj.print();//Director::print()
    obj.Employee::print();
    obj.Manager::print();

    return 0;
}

