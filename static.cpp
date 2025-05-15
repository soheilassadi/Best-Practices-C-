#include <iostream>

struct API
{
	static int a;
	static int b;

	static int GetA() {
		return a;
	}
};

// should assign value outside class/struct and main
int API::a = 23;

int main()
{
	std::cout << API::GetA() << '\n';
}