#include "make_random_vector.hpp"
#include <iostream>
#include <vector>

class int_czyt
{
public:
    int a;
    int_czyt() {}
    int_czyt(int g) : a{g} {}
    bool operator()(const int We) { return a < We; }
};

int main()
{

    int_czyt y;
    std::cin >> y.a;
    std::vector< int > A = make_random_vector(10, 1, 10);
    for (std::vector< int >::iterator it = A.begin(); it != A.end(); it++)
        std::cout << *it << "\t";
    std::sort(A.begin(), A.end());
    std::cout << "\n";
    for (std::vector< int >::iterator it = A.begin(); it != A.end(); it++)
        std::cout << *it << "\t";
    std::cout << "\n" << std::count(A.begin(), A.end(), y.a);
    std::sort(A.begin(), A.end(), [](int a, int b) { return a > b; });
    std::cout << "\n";
    for (std::vector< int >::iterator it = A.begin(); it != A.end(); it++)
        std::cout << *it << "\t";
    std::cout << "\n" << count_if(A.begin(), A.end(), y);
    std::cout << "\n" << count_if(A.begin(), A.end(), [&](int a) { return y.a < a; });
}
