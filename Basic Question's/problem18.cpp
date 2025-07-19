
#include<iostream>
#include<string>
std::string remove_white_spaces(std::string &text);
int main(){
    std::string text;
    std::cout << "Enter the string: ";
    std::getline(std::cin, text);
    std::string new_text = remove_white_spaces(text);
    return 0;
}
std::string remove_white_spaces(std::string &text){
   std::string new_text;
   int text_length = text.length();
   for(size_t i{};i<text_length;i++){
    if(text[i] != ' '){
        new_text += text[i];
    } 
   }
   return new_text; 
}