#include<iostream>
using namespace std;

template <typename T>
class my_vector{
    T* cordinate;
    public:
    my_vector(int a = 0.0 , int b = 0.0 , int c = 0.0){
        cordinate = new T[3];
        cordinate[0] = a;
        cordinate[1] = b;
        cordinate[2] = c;

    }

    my_vector operator * (my_vector V){
        my_vector <T> temp_vector;
        temp_vector.cordinate[0] = cordinate[0] * V.cordinate[0];
        temp_vector.cordinate[1] = cordinate[1] * V.cordinate[1];
        temp_vector.cordinate[2] = cordinate[2] * V.cordinate[2];
        return temp_vector;
    }

    void display(){
        cout<<"The dot product is\n";
        cout<<cordinate[0]<<"i + "<<cordinate[1]<<"j + "<<cordinate[2]<<"k  \n";
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