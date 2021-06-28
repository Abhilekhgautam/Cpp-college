#include<iostream>
#include<string>
using namespace std;

class College{
    string name,address;
    public:
    College(string n,string add):name(n),address(add){}
    void display(){
        cout<<"Class College"<<'\n';
        cout<<"Name:"<<name<<'\n'<<"Address:"<<address<<'\n';
        cout<<"/---------------------------------------------/"<<'\n';

    }
};

class Teacher:public College{
    string sub;
    public:Teacher(string n , string add,string sub1):College(n,add),sub(sub1){}
    void display(){
        cout<<"Class Teacher"<<'\n';
        cout<<"Subject:"<<sub<<'\n';
        cout<<"/---------------------------------------------/"<<'\n';

    }
};

class Student:public College{
    int roll;
    public:
    Student(string n,string add,int r):College(n,add),roll(r){}
    void display(){
        cout<<"Class Student"<<'\n';
        cout<<"Roll no:"<<roll<<'\n';
        cout<<"/---------------------------------------------/"<<'\n';
    }
};

class Staff:public College{
    double wage;
    public:
    Staff(string n,string add,double w):College(n,add),wage(w){}
    void display(){
        cout<<"Class Staff"<<'\n';
        cout<<"Wage:"<<wage<<'\n';
        cout<<"/---------------------------------------------/"<<'\n';

    }
};

class Morning_shift:public Staff{
    char code;
    public:
    Morning_shift(string n,string add, double w, char c):Staff(n,add,w),code(c){}
    void display(){
        cout<<"Class Morning_shift"<<'\n';
        cout<<"Code:"<<code<<'\n';
        cout<<"/---------------------------------------------/"<<'\n';

    }
};

class Day_shift:public Staff{
    char code;
    public:
    Day_shift(string n,string add, double w, char c):Staff(n,add,w),code(c){}
    void display(){
        cout<<"Class Day_shift"<<'\n';
        cout<<"Code:"<<code<<'\n';
        cout<<"/---------------------------------------------/"<<'\n';

    }
};

int main(){

    Teacher T("Abhi","Kathmandu","Physics");
    Student S("Diwas","Kathmandu",23);
    Morning_shift M("Rahul","Manigram",12345,'M');
    Day_shift D("Mahesh","Kathmandu",12345,'D');

    T.College::display();
    T.display();
    S.College::display();
    S.display();
    M.College::display();
    M.Staff::display();
    M.display();
    D.College::display();
    D.Staff::display();
    D.display();

return 0;

}
