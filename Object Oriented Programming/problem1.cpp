// Create a class Student with properties name, roll and cgpa. Create functions to input and display data.

#include<iostream>
#include<string>

class Student{
    private:
        std::string name;
        short int roll{};
        float cgpa{};
    public:
        Student()=default;
        Student(std::string& name, short int roll, float cgpa){
            this->name = name;
            this->roll = roll;
            this->cgpa = cgpa;
        }
        void show_data()const{
           std::cout << "name of the student is: " << this->name << std::endl;
           std::cout << "roll number of the student is: "<<this->roll << std::endl;
           std::cout << "cgpa of the student is: " << this->cgpa << std::endl; 
        }
};

int main(){
    std::string name;
    short int roll{};
    float cgpa{};
    std::cout <<"Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your roll number: ";
    std::cin >> roll;
    std::cout << "Enter your cgpa: ";
    std::cin >> cgpa;

    std::cout << "*******************************************************************"<<std::endl;

    Student s1(name, 25,8.39);
    s1.show_data();
    return 0;
}