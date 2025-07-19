//Check whether a string is a palindrome.
//#include<iostream>
//#include<string>
//bool check_string_palindrome(std::string text, std::string reversed_text, int text_length);
//int main(){
//    std::string text;
//    std::cout << "Enter the string: ";
//    std::getline(std::cin,text);
//    std::cout << "The string is: " << text << std::endl;
//    int text_length = text.length();
//    char temp;
//    std::string reversed_text;
//    // adding text content into reversed text
//    reversed_text = text;
//    for(size_t i{};i<text_length/2;i++){
//        temp = reversed_text[i];
//        reversed_text[i] = reversed_text[text_length-1-i];
//        reversed_text[text_length-1-i] = temp;
//    }
//    std::cout << "Reversed text is: " << reversed_text << std::endl;
//    // comparing both the strings 
//    std::cout << "Original text is: " << text << std::endl;
//    if(check_string_palindrome(text,reversed_text,text_length)) std::cout << "This is a palindrome text!";
//    else std::cout << "This is not a palindrome text!" << std::endl;
//    return 0;
//}
//
//bool check_string_palindrome(std::string text, std::string reversed_text,int text_length){
//    for(size_t i{}; i<text_length;i++){
//        if(text[i] != reversed_text[i]){
//            return false;
//        }
//    }
//    return true;
//}

// It can be better 
#include<iostream>
#include<string>

bool check_string_palindrome(std::string &text);
int main(){
    std::string text;
    std::cout << "Enter the string that you want to compare: ";
    std::getline(std::cin, text);
    if(check_string_palindrome(text)) std::cout << "String is palindrome!"<<std::endl;
    else std::cout << "String is not palindrome!"<< std::endl;
    return 0;
}
bool check_string_palindrome(std::string &text){
    std::cout << text << std::endl;
    int text_length = text.length();
    for(size_t i{}; i<text_length/2 ;i++){
        if(text[i]!=text[text_length-i - 1])return false;
    }
    return true;
}





