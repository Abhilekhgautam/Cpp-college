//using a getline function to input entire string

#include<iostream>
#include<string>

using namespace std;
int main () 
{
    string s1;
    cout<<"Enter your name\n";
    getline(cin,s1);
    cout<<"Hello "+ s1 + "!!";
}