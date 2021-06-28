/* A c++ program to describe "objects are destroyed int reverse order of theri creation"*/

// #include<iostream>

// class Table{
//     public:
//    Table(){std::cout<<"Object Created"<<'\n';}
//    ~Table(){std::cout<<"Object Destoyed"<<'\n';}
// };
// void f(int i)
// {
//     Table aa;
//     Table bb;
//     if(i>0){
//       //cc will be created after bb and destroyed before dd is created
//       Table cc;
//     }
//     Table dd;
// }
// int main(){
//     f(1);
//     return 0;
// }

//demonstration of a explicit constructor
#include<iostream>
using namespace std;

class A{
    int a;

    public:
    explicit A(int x = 0){
        a = x;
    }

    A(const A& obj){
        a = obj.a;
    }

    void display(){
        cout<<"a = "<<a<<'\n';
    }
};

int main(){

//  A obj1 = 23  error:conversion from int to type A requested.

/*  The above error occured because we have created an explicit constructor
which prevents the implicit conversion from one type to other
*/
    A obj = A('a');

/* If we had not created an explicit constructor

   A obj2 = 'a';

   led to the assignment

   A.a = int('a') = 97

   which is surely a programmer want to avoid.

*/

     obj.display();

     return 0;
}
