#include <iostream>

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;

    std::cout << "Fakt�riyelini hesaplamak istediginiz sayiyi girin: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Negatif sayilarin fakt�riyeli tanimli degildir." << std::endl;
    } else {
        int result = factorial(number);
        std::cout << number << "! = " << result << std::endl;
    }

    return 0;
}
