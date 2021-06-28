//demonstartion of static variables and fn's

#include<iostream>
using namespace std;

class Date{
    int d,m,y;
    /*Sometime we need some sort of variable that is used with classes not within object
     we declare them static.

     Only one copy of such variable is created.
    */
    static Date default_date;
    public:
      Date(int dd=0,int mm=0,int yr=0);
      static void set_default_date(int dd,int mm,int yr);
      void display_date () const;
};
Date::Date(int dd,int mm,int yr){

/*if dd,mm,yr is set to zero or some inavild date format
 we set the their default value.
*/

d = dd?dd:default_date.d;
m = mm?mm:default_date.m;
y = yr?yr:default_date.y;

}


Date Date::default_date(11,2,2058);

void Date::set_default_date(int dd,int mm,int yr){
    default_date = Date(dd,mm,yr);
}
void Date::display_date() const{
    cout<<d<<" "<<m<<" "<<y;
}

int main(){
Date today(0,0,0);
today.display_date();

return 0;
}
