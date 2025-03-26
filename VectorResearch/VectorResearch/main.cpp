#include <iostream>
#include <vector>

void print_vector_info(std::vector<int> vec) {
    std::cout << vec.size() << " " << vec.capacity() << std::endl;
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << "(" << &vec[i] << ") ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec(12);
    vec.reserve(100);
    print_vector_info(vec);
    for (int i = 0; i < 5; i++) { vec.push_back(111 * (i + 1)); }
    print_vector_info(vec);
    vec.insert(vec.begin() + 2, { 111, 222 });
    print_vector_info(vec);
    vec.erase(vec.begin() + 4);
    print_vector_info(vec);
    vec.emplace(vec.begin(), 5);
    print_vector_info(vec);
    vec.emplace_back(5);
    print_vector_info(vec);
    vec.clear();
    print_vector_info(vec);
    system("pause");
    return 0;
}
