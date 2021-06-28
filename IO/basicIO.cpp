//Converting inch to centimeter and vice versa
#include<iostream>

using namespace std;

int main () 
{
    const float factor = 2.54;
    float x ,in, cm;
    char ch = 0;

    cout<<"Enter the length:(i for inch and c for cm)\n";
    cin>>x;
    cin>>ch;

    switch(ch)
    {
        case 'i':
        in = x;
        cm = x * factor;
        break;

        case 'c':
        cm = x;
        in = x / factor;
        break;

        default:
        cout<<"Mention the unit as well(i for inch and c for cm)";
        break;
    }
    cout<<in<<" in = "<<cm<<" cm ";
}


