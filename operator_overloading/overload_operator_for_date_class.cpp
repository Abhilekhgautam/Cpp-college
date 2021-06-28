#include<iostream>
using namespace std;

class Date{
int day,month,year;
public:
  Date(int,int ,int);
  //display function
  void display_date() const;
  //overloaded operator
  void operator++();
  void operator++(int);
  void operator--();
  void operator--(int);
  friend ostream& operator<<(ostream&,Date&);
};
Date::Date(int d,int m,int y){
  day = d;
  month = m;
  year = y;
}
void Date::display_date() const{
    cout<<day<<'/'<<month<<'/'<<year<<'\n';
}
ostream& operator<<(ostream& os,Date& date){

    os<<date.day<<'/'<<date.month<<'/'<<date.year;
    return os;
}
//prefix
void Date::operator++(){
//increases yr,mth and day by 1
++day;
++month;
++year;
//don't forget to validate date
}
void Date::operator--(){
//increases yr,mth and day by 1
--day;
--month;
--year;
//don't forget to validate date
}
//postfix
void Date::operator++(int){
day++;
month++;
year++;
//don't forget to validate date
}
void Date::operator--(int){
//decreases yr,mth and day by 1
day--;
month--;
year--;
//don't forget to validate date
}

int main(){
Date date(11,2,2058);
cout<<date;
return 0;
}
