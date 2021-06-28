//demonstration of overloaded constructor


/*We can have multiple constructors which is constructor overloading.
  The constructor to be called is identified on the basis of 
  number of parameters in the constructor and also according to the parameters type.
*/
#include <iostream>
#include <string>

class User{
    std::string email;
    std::string phone;

    public:

/*A User can either authenticate using email or phonr or both*/
   
    User(std::string mail, std::string no){
        //validate email and phone here
        email = mail;
        phone = no;
    }

    User(std::string mail){
        //validate email here
        email = mail;
    }
    
    User(std::string no){
     //validate...
        phone = no;
    }

};

int main(){
   
   User user_one{"abhi_loves_@gmail.com","9867****"};
   User user_two{"abhi_loves_@gmail.com"};
   User user_three{"98......."};

}

