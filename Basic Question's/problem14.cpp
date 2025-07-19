// Write a function to check if a number is armstrong (e.g., 153 = 1³ + 5³ + 3³).

#include <iostream>
#include <cmath>
bool check_armstrong(int num);

int main()
{
    int num{};
    std::cout << "Enter the number: ";
    std::cin >> num;
    if (check_armstrong(num))
        std::cout << "number is armstrong" << std::endl;
    else
        std::cout << "number is not armstrong" << std::endl;
    return 0;
}

bool check_armstrong(int num)
{
    //checking some edge case's
    if(num<0)return false;
    if(num==0) return true;
    int no_of_digits = std::floor(std::log10(num)) + 1;
    // now we got number of digits in the number we can proceed to next step
    int actual_num = num;
    int modified_num{};
    while (num > 0)
    {
        modified_num += static_cast<int>(std::pow(num % 10, no_of_digits));
        num /= 10;
    }
    std::cout << actual_num << "  " << modified_num << std::endl;
    return (actual_num == modified_num) ? true : false;
}