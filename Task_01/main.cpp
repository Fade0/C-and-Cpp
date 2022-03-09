#include <iostream>
#include <valarray>

void task1(){
    double wzrost = -1;
    double waga = -1;
    double bmi = -1;
    std::cout << "Podaj swoj wzrost w metrach" << std::endl;
    std::cin >> wzrost;
    std::cout << "Podaj swoja wage w kilogramach" << std::endl;
    std::cin >> waga;

    bmi = waga / sqrt(wzrost);
    std::cout << "Twoje BMI to: " << bmi <<std::endl;

}

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
    //task1();
    //task2();
    //task3();
    //task4();
}