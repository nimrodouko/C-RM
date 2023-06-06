#include <iostream>

class Person{

public:
        person(const std::string & names_person , int age);
        void print_info()const{
            std::cout<<"name: "<<full_name<<"age: "<<std::endl;
        }
};private:
    std::string full-name;
    int age;
