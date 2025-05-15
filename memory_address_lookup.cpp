#include <iostream>

int main()
{
    const char* x = "Hello!";
    signed char y = 'b';

    // (void*) casting is going to empty rubbish in the memory number and show the real memory stack.
    std::cout << "x: " << (void*)&x << std::endl;
    std::cout << "y: " << (void*)&y << std::endl;

    // memory address of the main function
    std::cout << "main: " << (void*)&main << std::endl;
    return 0;
}
