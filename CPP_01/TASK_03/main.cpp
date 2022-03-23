#include <iostream>
#include <valarray>

void task3(){
    int number = -1;
    int digits = 0;
    int digits_max = 0;
    int maxNumber = 0;
    int tempNumber = number;
    while(number != 0){
        std::cout << "enter a natural number (0 if done):"<<std::endl;
        std::cin >> number;
        tempNumber = number;

        while(tempNumber != 0){
            int oneDigit = tempNumber%10;
            int theRest = tempNumber/10;
            tempNumber = theRest;
            digits = digits + oneDigit;

        }
        if(digits_max < digits){
            digits_max = digits;
            digits = 0;
            maxNumber = number;
        }

    }
    std::cout << "digits_max: " << digits_max << " for number: " << maxNumber<<std::endl;
}
int main() {
    task3();
}
