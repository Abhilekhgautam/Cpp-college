#include <iostream>

class DivideByZero{

    public:
    const char* what() const{
        return "Divide by zero attempted!";
    }

};

int main(){
    double x , y;

    std::cout << "Enter 2 numbers for division" << std::endl;
    std::cin >> x >> y;

    try{
        if(y == 0.0)
           throw DivideByZero();//throws an instance of DivideByZero
        
        else
          std::cout << x/y << std::endl;
    }
    //catches instance of DivideByZero
    catch(const DivideByZero& e){
        std::cout << "Exception encountered:"<< e.what() << std::endl;
    }
}