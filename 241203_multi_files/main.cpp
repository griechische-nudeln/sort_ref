#include "array_operations.hpp"

int main() {
    int numbers[] = { 5, 2, 71, 52, 13, 2003, 9 };
    const int size = sizeof(numbers) / sizeof(numbers[0]);

    print_array(numbers, size, "Изначальный массив:");

    swap_function(numbers, size);

    print_array(numbers, size, "Массив после обработки:");

    return 0;
}
