#include <iostream>


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
int main() {
    Task3();
}
