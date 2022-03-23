#include <iostream>
#include <valarray>

void task2(){
    double a = -1;
    double b = -1;
    double c = -1;
    double max = 0;

    std::cout << "podaj liczbe nieujemna A" <<std::endl;
    std::cin >> a;
    std::cout << "podaj liczbe nieujemna B" <<std::endl;
    std::cin >> b;
    std::cout << "podaj liczbe nieujemna C" <<std::endl;
    std::cin >> c;

    if(a >= b && a >= c){
        max = a;
    }
    if(b >= a && b >= c){
        max = b;
    }
    if(c >= a && c >= b){
        max = c;
    }
    //std::cout << max<<std::endl;

    for (int i = max; i > 0; i--){
        int x = a;
        int y = b;
        int z = c;

        if( x >= i){
            std::cout << "* ";
        }
        else{
            std::cout << "  ";
        }
        if( y >= i){
            std::cout << "* ";
        }
        else{
            std::cout << "  ";
        }
        if( z >= i){
            std::cout << "* ";
        }
        else{
            std::cout << "  ";
        }
        std::cout <<std::endl;

    }
}
int main() {
    task2();
}
