//Check if a number is prime or not.

#include<iostream>

bool check_prime(int num);

int main(){
    int num{};
    std::cout << "Enter a number: " ;
    std::cin >> num;
    if(check_prime(num)) std::cout << "number is prime!"<< std::endl;
    else std::cout << "number is not prime!" << std::endl;
    return 0;
}

bool check_prime(int num){
    unsigned char count = 0;
    for(size_t i=1;i<=num;i++){
        if(num%i==0) count++;
    }
    return count == 2 ? true : false;
}
