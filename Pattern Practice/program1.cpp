#include<iostream>
//solid rectangle

int main(){
    int n;
    std::cout << "Enter how many lines you want to print: ";
    std::cin >> n;
    for(size_t i(1);i<=n;i++){
        for(size_t j(1);j<=n;j++){
            std::cout << "*";
        }
        std::cout<<"\n";
    }
    return 0;
}