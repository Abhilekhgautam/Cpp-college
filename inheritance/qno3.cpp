#include<iostream>
#include<string>
using namespace std;

class Staff{
    string name,address,post;
    public:
    Staff(string nam,string add,string pst):name(nam),address(add),post(pst){}
    void display(){
        cout<<"Class Staff"<<'\n';
        cout<<"Name: "<<name<<'\n'<<"Address: "<<address<<'\n'<<"Post: "<<post<<'\n';
        cout<<"/---------------------------------------------/"<<'\n';
    }
};
class Teaching:public virtual Staff{
    string name,address,department;
    public:
    Teaching(string name1,string add1,string post, string name2, string add2, string deprt):Staff(name1,add1,post),name(name2),address(add2),department(deprt){}
    void display(){
        cout<<"Class Teaching"<<'\n';
        cout<<"Name: "<<name<<'\n'<<"Address: "<<address<<'\n'<<"Department: "<<department<<'\n';
        cout<<"/---------------------------------------------/"<<'\n';
    }
};
class Non_Teaching: public virtual Staff{
    string name,address,post;
    public:
    Non_Teaching(string name1 , string add1 , string deprt, string name2,string add2, string pst):Staff(name1,add1,deprt), name(name2),address(add2),post(pst){}
    void display(){
        cout<<"Class Non_Teaching"<<'\n';
        cout<<"Name: "<<name<<'\n'<<"Address: "<<address<<'\n'<<"Post: "<<post<<'\n';
        cout<<"/---------------------------------------------/"<<'\n';
    }

};
class Admin:public Teaching ,public Non_Teaching{
    string name,address,post;
    int working_hours;
    public:
    Admin(string name1, string add1, string pst1,string name2,string add2,string deprt, string name3, string add3, string pst2,string name4,string add4,string pst3,int wrk_hr):Staff(name1,add1,pst1),Teaching(name1,add1,pst1, name2, add2, deprt),Non_Teaching(name1, add1 ,pst1, name3, add3, pst2),name(name4),address(add4),post(pst3),working_hours(wrk_hr){}
    void display(){
        cout<<"Class Admin"<<'\n';
        cout<<"Name: "<<name<<'\n'<<"Address: "<<address<<'\n'<<"Post: "<<post<<'\n'<<"Working_hours:"<<working_hours<<'\n';
        cout<<"/---------------------------------------------/"<<'\n';
    }

};

int main(){
    Admin obj("Abhilekh Gautam","Raninagar","Senior React Developer","Bimal Pandey","Melbourne","Agriculture","Manoj Bk","Argakhanchi","Forester","Rahul Pantha","Manigram","Consultant Doctor",12);
    obj.Staff::display();
    obj.Teaching::display();
    obj.Non_Teaching::display();
    obj.display();
    return 0;
}