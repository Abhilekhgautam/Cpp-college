//abstract class

#include<iostream>
using namespace std;

/*
What is an abstract class?
-->There are certain types which are abstract i.e having their object
doesnot make any sense at all.

We cannot create an object of a abstract class.

Consider a class Shape,
If someone asks you to find the area of  shape,you might reply
which shape -square,triangle or what, this is what an abstract type is.

Abstract class are used to express abstract concept,

A class is made abstract by making one or more  pure virtual function
in the class

Abstract class is used to create an interface
*/

class Shape{
    public:
    //the = 0 initializer says it is pure virtual funvtion
    virtual void rotate() = 0;
    virtual void draw() = 0;
    //...

    /*Pure virtual functions cannot be invoked but why would someone want a function which
    cannot be invoked.The below code might be enough for you to understand

    void test_func(Shape* obj){
    obj->rotate();
  }

  You can just pass any derived class of shape and call its corresponding rotate function.
    */
};

/*
Circle will also be  an abstract class, to make it non-abstract we
should always override pure virtual function from our base Class

class Circle:public Shape{
    public:
    void rotate(){
        cout<<"This is a rotate function"<<'\n';
    }
};

int main(){
    Circle obj;
    obj.rotate();//error

    return 0;
}
*/

//not an abstract class because pure virtual functions are overridden
class Circle:public Shape{
    public:
    void rotate(){
        cout<<"This is a rotate function"<<'\n';
    }

    void draw(){
        cout<<"This is a draw function"<<'\n';
    }
};

int main(){
    Circle obj;
    obj.rotate();
    obj.draw();

    return 0;
}
