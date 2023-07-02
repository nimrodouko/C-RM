// Knowledge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstring>
#include <concepts>
template <typename T>T maximum (T a ,T b);
template<>
const char* maximum<const char*>(const char* a, const char* b) {
    return (std::strcmp(a, b) > 0 )? a : b;
}

int main()
{
    std::cout << "Hello World!\n";
    int a{ 33 };
    int b{ 45 };
    std::string hello{ "Nimrod" };
    std::string world{ "ouko" };

    std::cout << "result" << " :" << maximum(hello, world) << std::endl;
    return 0;
}
template <typename T>T maximum (T a, T b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}
template <typename S> S lengthy(S a, S b) {
    if (length(a) > 2) {
        return 34;
    }
    else {
        return 24;
    }
}
template <typename R>
    requires std::integral<R>
R add(R a, R b) {
    return a + b;
}

/*template <typename U>
requires std::is_integral_v<U>
U subtract(U a, U b) {
    return a - b;
}*/

 

//concepts
/*template <typename T>
void print_number(T n) {
    static_assert(std::is_integral )
}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
