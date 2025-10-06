#include <iostream>
#include <vector>
#include <numeric>

// kirianja-1 - C++ Implementation
// A simple Hello World program

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Welcome to kirianja-1" << std::endl;
    
    // Simple calculation
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int total = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum of numbers: " << total << std::endl;
    
    return 0;
}
