//Demonstration of a virtual function
/*
#include <iostream>
#include <string>


class Employee{
    std::string first_name,family_name;
    int department;
    public:
       void print(){
        std::cout<<"Hello from print function of Employee Class"<<'\n';
      }
};

class Manager:public Employee{
    public:
       void print(){
         std::cout<<"Hello from print function of Manager Class"<<'\n';
    }
};

class Prof:public Employee{
    public:
     void print(){
        std::cout<<"Hello from print function of Prof Class"<<'\n';
    }
};

int main(){
    //pointer to base type
    Employee* obj;
    Manager objMan;
    Prof objprof;

    obj = &objMan;
    obj->print();// calls the function of Employee class
    obj = &objprof;
    obj->print();// calls the function of Employee class
    return 0;
}
*/


/*
Using virtual function allows us to override the base definition of that function 
in the derived class.
*/

#include<iostream>

class Employee{
   std::string first_name,family_name;
    int department;
    public:
    //virtual function:can be overidden in derived class
      virtual void print(){
        std::cout<<"Hello from print function of Employee Class"<<'\n';
      }
};

class Manager:public Employee{
    public:
       void print(){
         std::cout<<"Hello from print function of Manager Class"<<'\n';
    }
};

class Prof:public Employee{
    public:
     void print(){
        std::cout<<"Hello from print function of Prof Class"<<'\n';
    }
};

int main(){
    //pointer to base type
    Employee* obj;
    Manager objMan;
    Prof objprof;

    obj = &objMan;
    obj->print(); // calls the function of Manager Class
    obj = &objprof;
    obj->print(); // calls the function of Prof Class
    return 0;
}
