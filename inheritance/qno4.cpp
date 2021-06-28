#include<iostream>
using namespace std;

class Person{
    string name,code;
    public:
    Person(string nam,string c):name(nam),code(c){}
    void display(){
        cout<<"Class Person"<<'\n';
        cout<<"Name: "<<name<<'\n'<<"Code: "<<code<<'\n';
        cout<<"/------------------------------------------------/"<<'\n';
    }
};
class Admin:public virtual Person{
   int xp;
   public:
   Admin(string nam,string c,int exp):Person(nam,c),xp(exp){}
   void display(){
        cout<<"Class Admin"<<'\n';
        cout<<"Experience Year: "<<xp<<'\n';
        cout<<"/------------------------------------------------/"<<'\n';
    }
};
class Account:public virtual Person{
    double salary;
    public:
   Account(string nam,string c,double income):Person(nam,c),salary(income){}
   void display(){
        cout<<"Class Account"<<'\n';
        cout<<"Salary: "<<salary<<'\n';
        cout<<"/------------------------------------------------/"<<'\n';
    }

};
class Record:public Admin,public Account{
    int rec_no;
    public:
    Record(string nam,string c,int exp, double income,int record_no):Person(nam,c),Admin(nam,c,exp),Account(nam,c,income),rec_no(record_no){}
    void display(){
        cout<<"Class Record"<<'\n';
        cout<<"Record No: "<<rec_no<<'\n';
        cout<<"/------------------------------------------------/"<<'\n';
    }

};

int main(){
    Record obj("Abhilekh Gautam","CLFA52F89C",10,10000000.0,1);
    obj.Person::display();
    obj.Admin::display();
    obj.Account::display();
    obj.display();

    return 0;
}