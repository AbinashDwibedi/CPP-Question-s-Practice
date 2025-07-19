// Take two integers as input and print their sum, difference, product, and quotient.
#include<iostream>

int addition(int a, int b);
int substraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int main(){//Should be int main(). Returning int is required in standard C++.
    int x = 0, y = 0 ;
    std::cout << "Enter your first number: ";
    std::cin >> x ;
    std::cout << "Enter your second number: ";
    std::cin >> y;

    std::cout << "addition is: " << addition(x,y) << std::endl;
    std::cout << "substraction is: " << substraction(x,y) << std::endl;
    std::cout << "multiplication is: " << multiplication(x,y) << std::endl;
    std::cout << "division is: " << division(x,y) << std::endl;
    return 0;
}

int addition(int a, int b){
    return a+b;
}
int substraction(int a, int b){
    return a-b;
}
int multiplication(int a, int b){
    return a*b;
}
int division(int a, int b){
    return a/b;
}