#include <iostream>
#include <array>

int main() {
    std::array<int, 10> input = {2, 99, 4, 66, 23, 567, 8, 88, 76, 3};

    int arr_size = input.size();
    for (int i = 0; i < arr_size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < arr_size; j++) {
            if (input[j] < input[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = input[i];
            input[i] = input[min_index];
            input[min_index] = temp;
        }
    }

    for (const int &element: input) {
        std::cout << element << " ";
    }

    return 0;
}