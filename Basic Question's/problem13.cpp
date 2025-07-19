//Write a function to find the GCD (Greatest Common Divisor) of two numbers.

//#include<iostream>
//
//int find_gcd(int x, int y);
//int main(){
//    int x{},y{};
//    std::cout << "Enter your numbers separated by space: ";
//    std::cin >> x >> y;
//
//    int gcd = find_gcd(x,y);
//    std::cout << "GCD is: " << gcd << std::endl;
//    return 0;
//}
//int find_gcd(int x, int y){
//    int small_number = x<y? x: y;
//    for(int i{small_number};i>0;i--){
//        if(x%i==0 && y%i==0)return i;
//    }
//    return 0;
//}


#include<iostream>
int find_gcd(int a,int b);
int main(){

    int x{},y{};
    std::cout << "Enter your number's: ";
    std::cin >> x >> y;

    std::cout << "gcd is: " << find_gcd(x,y) << std::endl;

    return 0;
}
int find_gcd(int a,int b){
    int temp{};
    while(a!=0){
        temp = a;
        a = b%a;
        b = temp;
    }
    return b;
}