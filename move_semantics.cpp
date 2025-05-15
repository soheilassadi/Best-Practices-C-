#include <iostream>
#include <string>

template<typename T>
void swap(T& a, T& b)
{
	T temp = a;
  // Best swap practice is use the move instead of copying
	a = std::move(b);
	b = std::move(temp);
}

int main() 
{
	int x = 10, y = 100;
	swap<int>(x, y);
	std::cout << "x=" << x << " y=" << y << "\n";	// Outputs: x=100 y=10

	float z = 30.5, j = 12.46;
	swap<float>(z, j);
	std::cout << "z=" << z << " j=" << j << "\n";	// Outputs: z=12.46 j=30.5 

	bool k = true, l = false;
	swap<bool>(k, l);
	std::cout << "k=" << k << " l=" << l << "\n";	// Outputs: k=0 l=1
}
