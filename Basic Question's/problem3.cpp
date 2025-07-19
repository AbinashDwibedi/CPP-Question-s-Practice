#include<iostream>

void check_even_odd(int num);
int main(){
    int num{};
    std::cout << "Enter the number: " ;
    std::cin >> num;
    check_even_odd(num);
    return 0;
}
void check_even_odd(int num){
    if(num %2 == 0){
        std::cout << "Number is even!" << std::endl;
    }
    else {
        std::cout << "Number is odd!" << std::endl;
    }
}
