#include <iostream>

template<typename T>
T Sum(T start) {
    return start;
}

template<typename T, typename... Args>
T Sum(T start, Args... args)
{
    return start + Sum<T>(args...);
}

int main()
{
    std::cout << Sum<int>(1,2,3,4,5) << "\n";
}