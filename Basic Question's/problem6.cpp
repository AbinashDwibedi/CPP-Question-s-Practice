//Print multiplication table of a given number
#include<iostream>

void print_multiplication_table(int num);
int main(){
    int num{};
    std::cout << "Enter a number: ";
    std::cin >> num;

    print_multiplication_table(num);
    return 0;
}
void print_multiplication_table(int num){
    for(size_t i=1;i<=10;i++){
        std::cout << num << " x " << i << " = " << num*i << std::endl; 
    }
}