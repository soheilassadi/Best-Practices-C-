#include <iostream>
#include <utility>

// Forwarding reference: `T&&` can bind to both lvalues and rvalues
template <typename T>
void forward(T&& arg) {
    if constexpr (std::is_lvalue_reference_v<T>)
        std::cout << "Lvalue reference\n";
    else
        std::cout << "Rvalue reference\n";
}

// True rvalue reference: can only bind to rvalues
void acceptRvalueRef(int&& arg) {
    std::cout << "Received rvalue reference\n";
}

int main() {
    int x = 42;

    // `T&&` in template function -> forwarding reference
    forward(x);  // T deduced as `int&`, so `T&&` becomes `int&`
    forward(100); // T deduced as `int`, so `T&&` becomes `int&&`

    // `int&&` -> true rvalue reference
    // acceptRvalueRef(x); // ERROR: cannot bind lvalue to rvalue ref
    acceptRvalueRef(std::move(x)); // OK: `std::move(x)` is an rvalue
}
