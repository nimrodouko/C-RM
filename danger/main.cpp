#include <iostream>
#include <cmath>
#include<string>
int main() {
    std::cout<<std::dec;
    std::cout<<std::uppercase;
    std::cout<<std::boolalpha;
    int number =10000;
    std::cout<<number<<std::endl;
    std::cout<<sin(number)<<std::endl;
    std::cout<<sqrt(number)<<std::endl;
    std::cout<<log(number)<<std::endl;
    std::cout<<pow(10,2)<<std::endl;
    if (number==10000){
        std::cout<<true<<std::endl;
    }
    else{
        std::cout<<false<<std::endl;
    }
    unsigned int num2 = 43;
    std::cout<<num2<<std::endl;
    signed long int num3= 45555555;/*how to set precision*/
    std::cout<<num3<<std::endl;

double salaries[5]{12.7, 10.7, 50.6, 54.7, 10.9};

for(size_t i{0};i<5; i++){
    std::cout<<"salary[" << i<< "]:" <<salaries[i]<<std::endl;
}

int scores []{10,12,15,12,8,7,6};
//ranged based for loop
for(auto score : scores){
    std::cout<<"scores:" <<score<< std::endl;
}
char message[5]{'H','e','l','l','o'};
std::cout<<"message :";
for(auto c: message){
    std::cout<<c;
}
std::cout<<std::endl;
std::cout<<sizeof(scores)<<std::endl;

//string literal
char message1 []{"hello what is your name ?"};
std::cout<<"message 1 is" <<message1<<std::endl;
std::cout<<sizeof(message1)<<std::endl;
   return 0;
}
