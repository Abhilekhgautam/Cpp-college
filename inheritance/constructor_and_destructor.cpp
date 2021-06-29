
/*Not all derived class not to call constructor for its base
 However it is mandatory to invoke a base class constructor 
 if base takes any parameter.
*/

#include <iostream>

class A{
    public:
     A(){
      std::cout << "Constructor for A invoked\n";
     }
     ~A(){
         std::cout << "Destructor for A invoked\n";
     }
};

class B{
    int x;
    public:
    // :x(n) is an initializer list i.e it initializes x with n
      B(int n):x(n){
          std::cout << "Constructor for B  invoked\n";
      }

      ~B(){
         std::cout << "Destructor for B invoked\n";
     }
};

//inherits from A (publicly)
class C:public A{
    int x;
    public:
      //no need to invoke constructor for A
      C(int a):x(a){
         std::cout << "Constructor for C invoked\n";
      }

      ~C(){
         std::cout << "Destructor for C invoked\n";
     }
};

class D:public B{
    int y;
    public:
    /*
    error: you need to call the constructor for base class B\
    because B as a parametrized constructor
      D(int a):y(a){
          std::cout << "This constructor is syntactically wrong\n"
      }
    */
   //correct way:
   D(int a , int b):B(a),y(b){
       std::cout << "Constructor for D invoked\n";
   }

   ~D(){
         std::cout << "Destructor for D invoked\n";
     }
};

int main(){
    C objc(1);
   // D obj(2); error: Constructor requires two parameters.
    D objD(2,3);

    return 0;
}

/*Note:
 Look at the order of construction and destruction.
 The constructor for Base is invoked and then that of derived is invoked.
 However destructor for derived is invoked and then that of base is invoked

 This is because objects are destroyed in the reverse order of their creation
*/

/* O/P
Constructor for A invoked
Constructor for C invoked
Constructor for B  invoked
Constructor for D invoked
Destructor for D invoked
Destructor for B invoked
Destructor for C invoked
Destructor for A invoked
*/