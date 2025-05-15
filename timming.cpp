#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std::chrono;

int main()
{
    auto begining = high_resolution_clock::now();

    std::vector<int> vec(1000000);
    std::fill(std::begin(vec), std::end(vec), 1);

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(end - begining);
    std::cout << "Duration: " << duration.count() << " microseconds!\n";

    // The following is optional for modern c++
    return 0;
}
