#include<iostream>

void swap_variable(int& a, int& b);
int main(){
    int a = 0, b = 0;
    std::cout << "Enter your first variable: ";
    std::cin >> a;
    std::cout << "Enter your second variable: ";
    std::cin >> b;
    std::cout << "Before swapping value of 'a' is: " << a << " and 'b' is: "<< b<< std::endl;
    swap_variable(a,b);
    std::cout << "After swapping value of 'a' is: " << a << " and 'b' is: "<< b<< std::endl;
    return 0;
}
void swap_variable(int& a, int& b){
    int temp = a;
    a = b;
    b= temp;
}