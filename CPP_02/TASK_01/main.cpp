#include <iostream>

#define GETMIN
#define GETMAX

void Task1(){

#ifndef GETMAX
    #ifndef GETMIN
        #error define GETMIN or GETMAX
    #endif
#endif
    std::cout << "Podaj a b c" << std::endl;
    int a,b,c;
    std::cin >> a >> b >> c;
#ifdef GETMAX
    if (a > b && a > c){
        std::cout << "MAX = " << a << std::endl;
    }
    else if (b > a && b > c){
        std::cout << "MAX = " << b << std::endl;
    }
    else if (c > b && c > a){
        std::cout << "MAX = " << c << std::endl;
    }
#endif
    system("pause");
#ifdef GETMIN
    if (a < b && a < c){
        std::cout << "MIN = " << a << std::endl;
    }
    else if (b < a && b < c){
        std::cout << "MIN = " << b << std::endl;
    }
    else if (c < b && c < a){
        std::cout << "MIN = " << c << std::endl;
    }
#endif
}
int main() {
    Task1();
}
