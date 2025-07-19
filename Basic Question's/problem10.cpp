//Take a string as input and print its length and reverse.
#include<iostream>
#include<string>

int main(){
    std::string text;
    std::cout << "Enter the string: ";
    std::getline(std::cin,text);
    std::cout << "The string is: " << text << std::endl;
    int text_length = text.length();
    std::cout << "length of the string is: " << text_length << std::endl;
    char temp;
    for(size_t i{};i<text_length/2;i++){
        temp = text[i];
        text[i] = text[text_length-1-i];
        text[text_length-1-i] = temp;
    }
    std::cout << "Reversed text is: " << text << std::endl;
    return 0;
}