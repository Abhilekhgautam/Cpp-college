#include <iostream>

class Meter_h{
    public:
      double meter;

    Meter_h(double a):meter(a){}

    void display(){
        std::cout << "The height is "<< meter << "meters.";
    }
};

class Feet_Inch{
     double feet ,inch;
     public:
     void input(){
         std::cout << "Enter your height in feet and inches (eg : 5 4)\n";
         std::cin >> feet >> inch;
     }

     operator Meter_h(){
         double temp_feet = feet;
         double temp_inch = inch;

         double temp_meter = temp_feet / 3.28084 + (temp_inch / 39.375) ;

         return Meter_h(temp_meter);
     }

 };

int main(){
   
   Feet_Inch h1;
   h1.input();

   Meter_h h2 = h1;
   h2.display();

   return 0;

}