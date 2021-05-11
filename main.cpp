#include <iostream>
#include <vector>

int main(int argc, char **argv) {
    std::vector<int> a = *new std::vector<int>[10];

    std::cout << a.size() << std::endl;
    std::cout << a.capacity() << std::endl;
    a.resize(15);
    std::cout << a.size() << std::endl;
    std::cout << a.capacity() << std::endl;

    a.push_back(1);
    a.push_back(2);
    std::cout << a.size() << std::endl;
    std::cout << a.capacity() << std::endl;

    std::cout << a[3] << std::endl;

    return 0;
}