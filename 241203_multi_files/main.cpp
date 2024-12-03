#include "array_operations.hpp"

int main() {
    int numbers[] = { 5, 2, 71, 52, 13, 2003, 9 };
    const int size = sizeof(numbers) / sizeof(numbers[0]);

    hlr::print_array(numbers, size, "Изначальный массив:");

    hlr::swap_function(numbers, size);

    hlr::print_array(numbers, size, "Массив после обработки:");

    return 0;
}
