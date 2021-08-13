//Replicated base class
// #include<iostream>
// using namespace std;

/*Graphical representation
        A       A
        |       |
        B       C
         \     /
            D    :D has two  copy of A one from C and other from B
*/

// class A{
//     int x = 5;
//     public:
//     void display(){cout<<x;}
// };

// class B: public A {
    //..
// };

// class C: public A {
  //.. 
// };

// class D:public B,public C{
  //.. 
// };

// int main(){
//     D obj;
//     obj.display();// error:ambigious call
//     return 0;
// }

//virtual base class,aka solution for replicated base class

/*Graphical representation
            A
          /   \
        B       C
         \     /
            D    :D has only one copy of A.
*/

#include<iostream>
using namespace std;

class A{
    int x = 5;
    public:
    void display(){cout<<x;}
};

//A single copy of A::display() will be shared by the virtual base
class B: virtual public A {
 //define here..
};

class C:virtual public A {
    //..
};

class D:public B,public C{
 //..
};

int main(){
    D obj;
    obj.display();//non ambigious call
    return 0;
}
