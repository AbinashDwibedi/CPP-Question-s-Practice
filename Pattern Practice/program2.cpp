//hollow rectangle
#include<iostream>

int main(){
    int num;
    std::cout << "Enter your number: " ;
    std::cin >> num;

    for(int i(1);i<=num;i++){
        for(int j(1);j<=num;j++){
            if(j==1 || i == 1 || j == num || i == num) std::cout << "* ";
            else std::cout<<"  ";
        }
        std::cout << "\n";
    }
    return 0;
}