#include <iostream>
#include <vector>

template<class T>
void output(T t) {
    for (const auto& elem : t) {
        std::cout << " " << elem;
    }
}
template<class T>
void removing_duplicates(T &vec) {
    int x = 0;

    for (int i = 0; i < vec.size(); ++i) {
        x = vec[i];
        auto iter = vec.cbegin();
        for (int j = i + 1; j < vec.size(); ++j) {
            if (vec[j] == x) {
                vec.erase(iter+j);
            }
        }
    }
}


int main()
{
    std::vector<int> vec = { 1, 1, 2, 5, 6, 1, 2, 4 };
    std::cout << "[IN]:";
    output(vec); std::cout << "\n" << std::endl;
    
    removing_duplicates(vec);
    std::cout << "[OUT]:";
    output(vec); std::cout << "\n" << std::endl;
}