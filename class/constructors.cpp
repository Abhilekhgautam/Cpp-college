/* A c++ program to describe "objects are destroyed int reverse order of their creation"*/

#include<iostream>

class Table{
    public:
   Table(){std::cout<<"Object Created"<<'\n';}
   ~Table(){std::cout<<"Object Destoyed"<<'\n';}
};
void f(int i)
{
    Table aa;
    Table bb;
    if(i>0){
      //cc will be created after bb and destroyed before dd is created
      Table cc;
    }
    Table dd;
}
int main(){
    f(1);
    return 0;
}

