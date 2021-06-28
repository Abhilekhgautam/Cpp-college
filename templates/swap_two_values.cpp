//Function template to swap two values

#include <iostream>

template <typename T> 
/*Always pass by reference ,passing by value only
 applies changes to the copy of object not on the
 real object.
*/
void swap(T& first , T& second){
    //traditional swaping algorithm
   T temp;
   temp = first;
   first = second;
   second = temp;

}

int main(){

    int x = 7 , y = 9;
    std::cout << "Before Swapping"<<std::endl;
    std::cout << "x = "<< x << " and y = "<< y <<std::endl;

    swap (x,y);

    std::cout << "After Swapping"<<std::endl;
    std::cout << "x = "<< x << " and y = "<< y <<std::endl;

    return 0;

}