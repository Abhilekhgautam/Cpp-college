//A member function X::operator T(),where T is a type name,defines a conversion from X to T
// #include<iostream>
// using namespace std;

// class A{
//      int i;
//     public:
//     A(int a = 0){i = a;}
//     //conversion from A to int type
//     operator int(){
//         return i;
//     }
//     void display(){
//         cout<<"i = "<<i<<'\n';
//     }
// };

// int main(){
//     A objA;

//     objA = 6;

//     objA.display();

//     int i = objA;

//     cout<<"i = "<<i<<'\n';

//     return 0;

// }
// #include<iostream>
// #include<cmath>
// using namespace std;
// class polar
// {
// private:
// float rd, ang;
// public:
// polar()
// {
// rd=0.0;
// ang=0.0;
// }
// polar(float r, float a)
// {
// rd=r;
// ang=a;
// }
// float getrd()
// {
// return(rd);
// }
// float getang()
// {
// return(ang);
// }
// void showpolar()
// {
// cout<<rd<<","<<ang<<endl;
// }
// };
// class rec
// {
// private:
// float x,y;
// public:
// rec()
// {
// x=0.0;
// y=0.0;
// }
// rec(float xco, float yco)
// {
// x=xco;
// y=yco;
// }
// void showrec()
// {
// cout<<x<<","<<y<<endl;
// }
// rec(polar p)
// {
// float r=p.getrd();
// float a=p.getang();
// x=r*cos(a);
// y=r*sin(a);

// }
// };
// int main()
// {
// rec r1;
// polar p1(2.0, 45.0);
// r1=p1;
// cout<<"polar coordinate system:";
// p1.showpolar();
// cout<<"rectangular coordinate system:";
// r1.showrec();
// return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// class rec
// {
// private:
// float x,y;
// public:
// rec()
// {
// x=0.0;
// y=0.0;
// }
// rec(float xco, float yco)
// {
// x=xco;
// y=yco;
// }
// void showrec()
// {
// cout<<x<<","<<y<<endl;
// }

// };
// class polar
// {
// private:
// float rd, ang;
// public:
// polar()
// {
// rd=0.0;
// ang=0.0;
// }
// polar(float r, float a)
// {
// rd=r;
// ang=a;
// }
// void showpolar()
// {
// cout<<rd<<","<<ang<<endl;
// }
// operator rec()
// {
// float x1= rd*cos(ang);
// float y1=rd*sin(ang);
// return rec(x1,y1);
// }
// };
// int main()
// {
// rec r1;
// polar p1(2.0, 45.0);
// r1=p1;
// cout<<"polar coordinate system:";
// p1.showpolar();
// cout<<"rectangular coordinate system:";
// r1.showrec();
// return 0;
// }

#include<iostream>
#include<cstring>
using namespace std;



class sample
{
int length;
char *name;
public:
sample()
{
length=0;
name=new char[length+1];
}
sample(char *p)
{
length=strlen(p);
name=new char[length+1];
strcpy(name,p);
}
void display()
{
cout<<name<<endl;
}
friend sample operator +(sample &a, sample &b)
{
sample temp;
temp.length=a.length+b.length;
temp.name=new char[temp.length+1];
strcpy(temp.name,a.name);
strcat(temp.name,b.name);
return temp;
}
};
int main()
{
sample s1("Abhilekh "),s2("Gautam"),s3;
s1.display();
s2.display();
s3=s1+s2;
s3.display();
return 0;
}