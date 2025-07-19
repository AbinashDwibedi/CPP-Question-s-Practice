//Count the number of even and odd numbers in an array.

#include<iostream>
#include<vector>

int main(){
    int n{};
    std::cout << "Enter how many number's you want to add: ";
    std::cin >> n;
    std::vector<int> arr(n);
    std::cout << "Enter your array: ";
    for(size_t i{};i<n;i++){
        std::cin >> arr[i];
    }
    std::cout << "Number's in the array are: ";
    for(size_t i{};i<n;i++){
        std::cout << arr[i] << ", ";
    }
    std::cout << "\n";
    int odd{};
    int even{};
    for(size_t i{}; i< n;i++){
        if(arr[i]%2==0) even++;
        else odd++;
    }
    std::cout << "Even number's in the array is: " << even << std::endl;
    std::cout << "Odd number's in the array is: " << odd << std::endl;
    return 0;
}