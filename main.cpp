#include <iostream>

int fibonacci_iterative(int index) {
    int a = 0;
    int b = 1;

    if (index == 0 || index == 1) {
        return index;
    }

    for (int i = 2; i < index; i++) {
        int tmp = a + b;
        a = b;
        b = tmp;
    }

    return  b;
}

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

    int result = fibonacci_iterative(index);

    std::cout << "The result is: " << result << std::endl;

    return 0;
}