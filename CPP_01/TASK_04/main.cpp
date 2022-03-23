#include <iostream>

void task4(){

    int minRange = 1;
    int maxRange = 1000000;
    char answer ='x';
    for (int i = 0; i <= 20; i++){

        int tempNumber = (minRange + maxRange) /2;
        std::cout << "Question " << i+1 << ": Is "<< tempNumber << " your number?"<<std::endl;
        std::cin >>answer;

        while(answer != 'y' && answer != 'b' && answer != 's'){
            std::cout << "Please use y,b or s" <<std::endl;
            std::cin >> answer;
        }

        if (answer == 'y'){
            std::cout << "Your number is: " << tempNumber << std::endl;

        }
        else if(answer == 'b'){
            minRange = tempNumber;

        }
        else if(answer == 's'){
            maxRange = tempNumber;
        }
    }
}

int main() {
    task4();
}
