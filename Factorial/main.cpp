#include <iostream>

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;

    std::cout << "Faktöriyelini hesaplamak istediginiz sayiyi girin: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Negatif sayilarin faktöriyeli tanimli degildir." << std::endl;
    } else {
        int result = factorial(number);
        std::cout << number << "! = " << result << std::endl;
    }

    return 0;
}
