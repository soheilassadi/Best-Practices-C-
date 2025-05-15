#include <iostream>
#include <string>

struct Entity
{
	std::string name;
	int* collection;
	int x, y;
};

int main()
{
	// Without initialization {}, the following code produces garbage values.
	Entity e{};
	std::cout << e.name << "\n";
	std::cout << e.collection << "\n";
	std::cout << e.x << "\n";
	std::cout << e.y << "\n";
}
