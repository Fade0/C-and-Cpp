#include <iostream>

void Task4(){
    int min = 999999;
    int max = -999999;
    int input;
    int minNumber = 9999999;
    int maxNumber = -9999999;
    int minCounter = 1;
    int maxCounter = 1;
    std::cout << "Podaj liczbe" << std::endl;
    std::cin >> input;

    while (input != 0){
        if(input < min){
            min = input;
            minNumber = input;
            if(input == minNumber){
                minCounter++;

            }
            std::cout << "Min1 = " << minNumber << " " << minCounter << " razy" << std::endl;
        }


        else{
            minCounter = 1;
            std::cout << "Min2 = " << minNumber << " " << minCounter << " razy" << std::endl;
        }

        if(input > max){
            max = input;
            if(input == maxNumber){
                maxCounter++;
            }
        }
        else{
            maxCounter = 1;
        }
        minNumber = min;
        maxNumber = max;
        std::cin >> input;
    }
    std::cout << "Min = " << minNumber << " " << minCounter << " razy" << std::endl;
    std::cout << "Max = " << maxNumber << " " << maxCounter << " razy" << std::endl;
}
int main() {
    Task4();
}
