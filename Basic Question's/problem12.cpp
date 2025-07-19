// sort an array using bubble sort 

#include<iostream>
#include<vector>

void bubble_sort(std::vector<int> &arr);
int main(){
    std::vector<int> arr{1,3534,3,5623,23,63};
    bubble_sort(arr);
    for(size_t i{};i<arr.size();i++){
        std::cout << arr[i] << ", ";
    }
    std::cout << "\n";
    return 0;
}
void bubble_sort(std::vector<int> &arr){
    int n = arr.size();
    int temp {};
    for(size_t i{};i<n-1;i++){
        for(size_t j{};j<n-i-1;j++){
            if(arr[j]> arr[j+1]){
//                temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
                std::swap(arr[j],arr[j+1]);
            }
        }
    }
}
