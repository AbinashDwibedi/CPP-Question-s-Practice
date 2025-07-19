//method 1
// #include<iostream>
// #include<vector>

// std::vector<int> find_n_natural_numbers(int n);
// int main(){
//     int n;
//     std::cout << "Enter how much numbers you want: ";
//     std::cin >> n;
//     // std::vector<int> result(n);
//     // result = find_n_natural_numbers(n);
//     //or 
//     std::vector<int> result = find_n_natural_numbers(n);
//     std::cout << "numbers are: ";
//     for(size_t i = {};i<n;i++){
//         std::cout << result[i] << ", ";
//     }
//     std::cout << "\n";
//     return 0;
// }
// std::vector<int> find_n_natural_numbers(int n){
//     std::vector<int> arr(n);
//     for(size_t i = 0; i<n; i++){
//         arr[i] = i +1;
//     }
//     return arr;
// }


//method 2
#include<iostream>


int* find_n_natural_numbers(int n);
int main(){
    int n;
    std::cout << "Enter how much numbers you want: ";
    std::cin >> n;
    int* arr = find_n_natural_numbers(n);
    std::cout << "numbers are: ";
    for(size_t i{};i<n;i++){
        std::cout << arr[i] << ", ";
    }
    std::cout << "\n" ;
    delete[] arr;
    return 0;
}
int* find_n_natural_numbers(int n){
    int* arr = new(std::nothrow) int[n];
    for(size_t i{}; i< n ; i++){
        arr[i] = i+1;
    }
    return arr;
}

