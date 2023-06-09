#include <iostream>
// function declaration
#include "comparisons.h"
#include "operations.h" // include preprocessor

int max(int a, int b){
    if (a<b)
        return b;

    else
        return a;
}

int main()
{
    int x{5};
    int y{2};

    int result = max(x,y);
   
     std::cout<<result<<std::endl;
    
    int minimum = min(x,y);
    std::cout<<minimum<<std::endl;
    std::cout<<squareroot(100)<<std::endl;
     std::cout<<markings()<<std::endl;
    return 0;
}


