#include <iostream>
#include <string>
#include <algorithm>

//smallLength exception class
class smallLengthException{

    int n;
    public:
    smallLengthException(int size):n(size){}

    int what() const {
        return n;//returns n(length of string)
    } 

};

class User{
    std::string user_name;
    
    public:
    
    void input_user_name(){
        std::string temp_name;
        std::cout << "Enter username"<<std::endl;
        std::cin >> temp_name;
        validateLength(temp_name);
    }
    void validateLength(std::string name);
};

void User::validateLength(std::string name){
   try{
   if(name.size() <= 5)
       throw smallLengthException(name.size());//calls the constructor of smallLengthException

    else
      user_name = name;
      std::cout << "User name set to :"<< user_name << std::endl;
   }
// a try block must least have a catch block
   catch(const smallLengthException& e ){
       std::cout<<"User name too short:"<<e.what()<<std::endl;
   }

}

int main(){

   User u1;
   u1.input_user_name();

    return 0;
}