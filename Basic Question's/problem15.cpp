//Write a recursive function to calculate factorial.

#include<iostream>

int find_factorial(int num);

int main(){
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Factorial is: " << find_factorial(num)<<std::endl;
    return 0;
}

int find_factorial(int num){
    if(num == 1)return 1;
    else return num*find_factorial(num-1);
}
