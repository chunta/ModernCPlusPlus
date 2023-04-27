#include <iostream>
#include <vector>

int main() {

    // list initialization of a vector
    std::vector<int> my_vec{1, 2, 3, 4, 5};

    // iterate over the vector and print each element
    for (auto i : my_vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}