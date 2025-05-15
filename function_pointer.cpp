#include <iostream>
#include <functional>

int add(int x, int y)
{
	return x + y;
}

int main()
{
	// Modern style for function pointers
	std::function<int(int, int)> fp;

	fp = add;

	std::cout << fp(2, 3) << "\n";
}
