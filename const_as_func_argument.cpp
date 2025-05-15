#include <iostream>
#include <vector>
#include <algorithm>

// This const says that I promise not to change the value.
void read_vector(const std::vector<int>& v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << "\n";
    }
}

int main()
{
    std::vector<int> vec(5);
    // fills all elements of the vector with a fixed int.
    std::fill(std::begin(vec), std::end(vec), 1024);

    read_vector(vec);

    return 0;
}
