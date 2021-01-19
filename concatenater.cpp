#include <iostream>
#include <string>
using namespace std;

int main() {
    double n; //number of inputs

    //get number of inputs (cannot handle non-numerical values)
    while(true) {
        std::cout << "Please enter your # of inputs: ";
        std::cin >> n;
        if (n <= 0) {
            std::cout << "The input has to be greater than 0!\n\n";
            continue;
        }
        else break;
    }
    //std::cout << "Number of inputs entered: " << n;

    //combining inputs
    string output{""};
    std::cout << "You may now start entering your inputs (seperate each with <Enter>)..." << std::endl;

    /*for(double i; i = 0; i++) {
        string next;
        std::cin >> next;
        output += next;
    }*/
    std::cin >> output;

    //print final output
    std::cout << "Here is your final concatenated string: " << output;

    return 0;
}