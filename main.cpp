#include <iostream>

// [return type] [name of the function] ([arguments]) ----> signature

bool is_prime(int number) {

    for (int i=2; i<number/2; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}


//     INPUT ----> {???} ---> OUTPUT
//     n     ----> {is prime} ----> true/false

int main() {
    std::cout << "Please introduce a number:" << std::endl;

    int number;
    std::cin >> number;

    if (is_prime(number)) {
        std::cout << "Your number is prime" << std::endl;
    } else {
        std::cout << "Your number is NOT prime" << std::endl;
    }



    return 0;
}