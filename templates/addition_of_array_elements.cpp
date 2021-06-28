//addition of array element
#include<iostream>
using namespace std;

template <typename T, int size>
int add(T* arr){
    int sum = 0;
    for(int i = 0 ; i < size ; i++){
        sum+= arr[i];
    }

    return sum;
}

int main(){
    int array[5] = {5,10,15,20,25};
    int sum = add<int , 5>(array);

    cout<<"The sum is:"<<sum<<'\n';

    return 0;
}
