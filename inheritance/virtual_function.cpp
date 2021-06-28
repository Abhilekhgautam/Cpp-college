//Demonstration of a virtual function
#include<iostream>
using namespace std;

class Employee{
    string first_name,family_name;
    int department;
    public:
    virtual void print();
};

class Manager:public Employee{
    public:
    void print();
};

class Prof:public Employee{
    public:
    void print();
};

void Employee::print (){
    cout<<"Hello from print function of Employee Class"<<'\n';
}

void Manager::print (){
    cout<<"Hello from print function of Manager Class"<<'\n';
}

void Prof::print(){
    cout<<"Hello from print function of Prof Class"<<'\n';

}

int main(){
    Employee* obj;
    Manager objMan;
    Prof objprof;

    obj = &objMan;
    obj->print();
    obj = &objprof;
    obj->print();
    return 0;
}
