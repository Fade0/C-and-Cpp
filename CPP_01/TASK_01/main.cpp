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
int main() {
    task1();
}
