#include <iostream>

int main() {
    double n; //number of inputs

    while(true) {
        std::cout << "Please enter your # of inputs: ";
        std::cin >> n;
        if (n <= 0) {
            std::cout << "The input has to be greater than 0!\n";
            continue;
        }
        else break;
    }

    std::cout << "Number of inputs entered: " << n;

    return 0;
}