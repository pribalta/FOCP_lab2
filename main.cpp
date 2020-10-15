#include <iostream>

int fibonacci_iterative(int index) {
    int a = 0;
    int b = 1;

    if (index < 2) {
        return index;
    }

    for (int i = 1; i < index; i++) {
        int tmp = a + b;
        a = b;
        b = tmp;
    }

    return  b;
}

int fibonacci_recursive(int index) {
    if (index < 2) {
        return index;
    }

    return fibonacci_recursive(index-2) + fibonacci_recursive(index -1);
}

// 5
// 3 + 4
// (1 + 2) + (2 + 3)
// (1 + (0 + 1)) + ((0 + 1) + (1 + 2))
// (1 + (0 + 1)) + ((0 + 1) + (1 + (0 + 1)))

int read_int() {
    std::cout << "Please introduce a number:" << std::endl;

    int n;
    std::cin >> n;

    return n;
}

// 1 - Read an integer - nth element of the fibonacci sequence
// 2 - Calculate fibonacci - iteratively
// 2b - Calcualte fibonacci - recursively
// 3 - Print the number

// 0, 1, 1, 2, 3, 5, 8, 13, ...
//                   ^  ^

int main() {
    int index = read_int();

    int result_iterative = fibonacci_iterative(index);

    std::cout << "The result with iteration is: " << result_iterative << std::endl;

    int result_recursive = fibonacci_recursive(index);

    std::cout << "The result with recursion is: " << result_recursive << std::endl;

    return 0;
}