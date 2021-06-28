#include<iostream>
using namespace std;

class Complex{
  int real,imag;
 public:
  Complex(int re,int im):real(re),imag(im){}
  Complex(){
      real = 0;
      imag = 0;
}
//overloaded operators
Complex operator+(const Complex);
Complex operator-(const Complex);
void operator=(const Complex);
bool operator!=(const Complex);
bool operator==(const Complex);
friend ostream& operator<<(ostream&,Complex);
};

ostream& operator<<(ostream& os,Complex c1){
    if(c1.imag<0)
      os<<c1.real<<c1.imag<<"i";
    else
      os<<c1.real<<"+"<<c1.imag<<"i";
    return os;
}
//overloading + operator
Complex Complex::operator+(const Complex c1){
    Complex temp;
    temp.real = real + c1.real;
    temp.imag = imag + c1.imag;
    return temp;
}
// overloading - operator
Complex Complex::operator-(const Complex c1){
    Complex temp;
    temp.real = real - c1.real;
    temp.imag = imag - c1.imag;
    return temp;
}
//overloading assignment operator
void Complex::operator=(const Complex c1){
    real = c1.real;
    imag = c1.imag;
}
//overloading != operator
bool Complex::operator!=(const Complex c1){
if(real!=c1.real || real!=c1.imag){
    return true;
}
else
return false;
}
//overloading == operator
bool Complex::operator==(const Complex c1){
    if(real == c1.real && imag == c1.imag){
        return true;
    }
    else
    return false;
}
int main(){
    Complex c1(2,2);
    Complex c2(2,2);

    cout<<c1<<'\n';
    cout<<c2<<'\n';
}

