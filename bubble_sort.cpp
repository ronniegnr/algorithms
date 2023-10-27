#include <iostream>
#include <array>

int main() {
    std::array<int, 10> input = {2, 99, 4, 66, 23, 567, 8, 88, 76, 3};

    for (int i = 0; i < input.size(); i++) {
        for (int j = i + 1; j < input.size(); j++) {
            if (input[i] > input[j]) {
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }

    for (const int& element: input) {
        std::cout << element << " ";
    }

    return 0;
}