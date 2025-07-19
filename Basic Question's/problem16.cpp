//swapping variable's using pointer's

#include<iostream>

int main(){
    int a{},b{};
    std::cout << "Enter your number's: ";
    std::cin >> a >> b;
    int* x = &a;
    int* y = &b;
    std::cout<< "Before swapping a = "<< a << ", b = "<<b<<std::endl;

    int temp = *x;
    *x = *y;
    *y = temp;
    std::cout<< "Before swapping a = "<< a << ", b = "<<b<<std::endl;
    return 0;
}