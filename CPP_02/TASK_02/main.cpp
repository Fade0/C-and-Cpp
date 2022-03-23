#include <iostream>
#include <math.h>

void Task2(){
    double a,b,c;

    std::cout << "Podaj a b c" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    double delta = pow(b,2) - (4 * a * c);

    double sqrtDelta = sqrt(delta);
    std::cout << delta << std::endl;
    if(a != NULL && b != NULL && c != NULL){
        if(delta > 0){
            double x1,x2;
            x1 = (-b - sqrtDelta)/2*a;
            x2 = (-b + sqrtDelta)/2*a;

            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "x2 = " << x2 << std::endl;
        }
        else if(delta < 0){
            double x1,x2;
            x1 = (-b - sqrtDelta)/2*a;
            x2 = (-b + sqrtDelta)/2*a;

            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "x2 = " << x2 << std::endl;

        }
        else if(delta == 0){
            double x1;
            x1 = -1*b/2*a;
            std::cout << "x = " << x1 << std::endl;
        }
    }
    else{
        std::cout << "Podaj dobre zmienne" << std::endl;
    }

}

int main() {
   Task2();

}
