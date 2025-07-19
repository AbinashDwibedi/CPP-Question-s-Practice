#include<iostream>

int find_largest(int a, int b, int c);
int main(){
    int a,b,c;
    std::cout << "Enter first, second and third number by giving spaces: ";
    std::cin >> a >> b >> c;
    std::cout << find_largest(a,b,c) << " is greater" << std::endl;
    return 0;
}
int find_largest(int a, int b, int c){
    return ((a>b) ? (a>c ? a : c) : b);
}