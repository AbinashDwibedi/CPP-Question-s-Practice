#include<iostream>
#include<vector>
void show_array(std::vector<int> & arr);

int main(){
    std::vector<int> arr= {23,53,5342,23};
    show_array(arr);
    arr.push_back(234);
    show_array(arr);
    arr.pop_back();
    show_array(arr); 
    std::cout << "size of array is: " << arr.size() << std::endl;
    std::cout << "is array empty: "<< arr.empty() << std::endl;
    //arr.clear(); // removes all the elements from the array
    //arr.at(0) ; bounds checked 
    //arr[0] ; no bounds check
    std::cout << "Front element is: "<< arr.front() << std::endl;
    std::cout << "Back element is: "<<arr.back() << std::endl;
    arr.insert(arr.begin()+2, 234);
    show_array(arr);
    arr.erase(arr.begin());
    show_array(arr);
    
    return 0;
}
void show_array(std::vector<int> & arr){
    std::cout << "************************************" << std::endl;
    for(size_t i{};i<arr.size();i++){
        std::cout << arr[i] << ", " << std::endl;
    }
}
