#include <iostream>
#include <math.h>

#define GETMIN
#define GETMAX

void Task1();
void Task2();
void Task3();
void Task4();
void Task5();

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
void Task3(){
    int counter = 1;
    int input;
    int number;
    int max = -999999;
    int lastNumber = 0;

    std::cin >> input;
    while (input != 0) {
        if (input == lastNumber) {
            counter++;
            if (counter > max) {
                max = counter;
            }
        }

        else {
            lastNumber = input;
            counter = 1;
        }
        number = input;
        std::cout << "Longest sequence: " << counter << " times " << number << std::endl;
        std::cin >> input;
    }
}
void Task4() {

    int userInput;

    int maxNumber;
    int maxCounter = 1;

    int minNumber;
    int minCounter = 1;

    std::cout << "Podaj liczbe" << std::endl;
    std::cin >> userInput;

    while (userInput != 0){
        //MAX
        if (userInput == maxNumber){
            maxCounter++;
        }
        if (userInput > maxNumber){
            maxNumber = userInput;
            maxCounter = 1;
        }

        //MIN
        if (userInput == minNumber){
            minCounter++;
        }
        if (userInput < minNumber) {
            minNumber = userInput;
            minCounter = 1;
        }
        std::cin >> userInput;
    }
    std:: cout << "Min: " << minNumber << " time " << minCounter << std::endl;
    std:: cout << "Max: " << maxNumber << " time " << maxCounter << std::endl;
}
int gcdRec(int a,int b){
    if ( a == 0)
        return b;
    return gcdRec(b% a, a);

}
int sumDigits(int n){
    if (n == 0){
        return 0;
    }
    else {
        return n%10 + sumDigits(n/10);
    }
}

int numDigits(int n){
    if (n == 0){
        return 0;
    }
    else{
        return 1 + numDigits(n/10);
    }
}

void printOddEven(int n){
    if (n ==2){
        std::cout << 2 << " ";
    }
    else if (n == 1) {
        std::cout << 1 << " ";
    }
    else{
        printOddEven(n -2);
        std ::cout << n << " ";
    }
}

void Task5(){
    std::cout << gcdRec(205,50) << std::endl;

}
int main() {

    //Task1();
    //Task2();
    //Task3();
    Task4();
    //Task5();


}
