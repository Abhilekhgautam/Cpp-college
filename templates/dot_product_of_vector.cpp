#include<iostream>
using namespace std;

template <typename T>
class my_vector{
    T x,y,z;
    public:
    my_vector(T a = 0.0 , T b = 0.0 , T c = 0.0){
        x = a;
        y = b;
        z = c;
    }

    my_vector operator * (my_vector V){
        my_vector <T> temp_vector;
        temp_vector.x = x * V.x;
        temp_vector.y = y * V.y;
        temp_vector.z = z * V.z;

        return temp_vector;
    }

    void display(){
        cout<<"The dot product is\n";
        cout<<x<<"i + "<<y<<"j + "<<z<<"k  \n";
    }
};

int main(){

    my_vector<int> V1(1,2,3);
    my_vector<int> V2(4,5,6);
    my_vector<int> V3;

    V3 = V1 * V2;

    V3.display();

    return 0;
}