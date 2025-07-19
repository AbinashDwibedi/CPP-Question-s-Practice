//Store 10 numbers in an array and print the maximum and minimum.

// #include<iostream>

// int main(){
//     int n{};
//     std::cout << "Enter how many number's you want to add: ";
//     std::cin >> n;
//     int arr[n];
//     std::cout << "Enter your array: ";
//     for(size_t i{};i<n;i++){
//         std::cin >> arr[i];
//     }
//     std::cout << "Number's in the array are: ";
//     for(size_t i{};i<n;i++){
//         std::cout << arr[i] << ", ";
//     }
//     std::cout << "\n";
//     return 0;
// }

/// use vectors in stead of normal array that we use in c
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
    int max = arr[0];
    int min = arr[0];

    for(size_t i=1;i<n;i++){
        if(max<arr[i]) max = arr[i];
        if(min>arr[i]) min = arr[i];
    }
    std::cout << "maximum number in the array is: " << max << std::endl;
    std::cout << "minimum number in the array is: " << min << std::endl;
    return 0;
}