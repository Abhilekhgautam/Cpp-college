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