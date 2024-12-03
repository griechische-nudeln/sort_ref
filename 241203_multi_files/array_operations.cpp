#include "array_operations.hpp"
#include <iostream>
#include <algorithm>

void hlr::swap_function(int arr[], const int size) {
    for (int i = 0; i < size - 2; i++) {
        if ((arr[i] < arr[i + 1] && arr[i + 1] < arr[i + 2]) || (arr[i] > arr[i + 1] && arr[i + 1] > arr[i + 2])) {
            std::swap(arr[i + 1], arr[i + 2]); 
        }
    }
}

void hlr::print_array(const int arr[], const int size,  const char* const message) {
    std::cout << message << "\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
