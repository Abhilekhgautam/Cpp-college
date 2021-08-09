#include<iostream>
#include<vector>
#include<algorithm>

void display(std::vector <int> num){
  for(auto elm:num){
    std::cout << elm << " ";
  }
  std::cout << std::endl;
}

int main(){
  std::vector <int> num;
  //inserts number from 1 to 10 in the vector
  for(int i =1 ; i <= 10 ; i++){
     num.push_back(i);//push_back() inserts at the end of the vector
  }
  std::cout << "After adding numbers in the vector from 1 to 10"<<std::endl;
  display(num);

  //doubles all the number in the vector

  for(auto& elm: num){
    elm = elm * 2;
  }
  std::cout << "After Doubling"<<std::endl;
  display(num);
  
 

  //Reversing a vector
  
  reverse(num.begin(),num.end());

  std::cout << "After Reversing" << std::endl;
  display(num);

  //sorting in ascending order
  
  sort(num.begin(),num.end());

  std::cout << "After Sorting in asc order"<<std::endl;
  
  display(num);

 
  
  //lambda for desc sort

  auto desc_sort = [] (auto num1 , auto num2){
      return num2 < num1; 
  };

  //sorting in descending order
  sort(num.begin(),num.end(),desc_sort);
  
  std::cout << "After sorting in descending order"<<std::endl;

  display(num);
  
  //counts the number of numbers greater than 8

  auto greater_than_eight = count_if(num.begin(),num.end(),[](auto num){return num > 8;});
  
  std::cout << "There are "<< greater_than_eight << " numbers greater than eight" << std::endl;
  
  //Inputting an entire sentence using a vector

  std::vector <std::string> name;

  std::cout << "Enter your name" << std::endl;
  while(std::cin>>name)
	  name.push_back(name);

  return 0;

}
