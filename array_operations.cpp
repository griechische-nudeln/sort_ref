#include "array_operations.hpp"
#include <iostream>
#include <algorithm>

void swap_function(int A[], int size) {
    for (int i = 0; i < size - 2; i++) {
        if ((A[i] < A[i + 1] && A[i + 1] < A[i + 2]) || (A[i] > A[i + 1] && A[i + 1] > A[i + 2])) {
            std::swap(A[i + 1], A[i + 2]); 
        }
    }
}

void print_array(const int arr[], const int size, const std::string& message) {
    std::cout << message << "\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
