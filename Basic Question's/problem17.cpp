//Write a program to show pointer to pointer (double pointer).
#include<iostream>

int main(){
    int x = 253;
    int *y = &x;
    int **z = &y;
    std::cout << "value of x is: "<< *(*(z)) << std::endl;
    int ***a = &z;
    std::cout << "value of x is: " << *(*(*(a)))<<std::endl;
    return 0;
}