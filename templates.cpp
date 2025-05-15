#include <iostream>
#include <vector>
#include <array>

template<typename T, typename Container>
T SumFunction(const Container& container)
{
	T sum{};
	for (const auto& item : container)
	{
		sum += item;
	}
	return sum;
}

int main()
{
	std::array<float, 5> my_array{ 1.1, 2.2, 3.3, 4.4, 5.5 };
	std::cout << "Sum Template (Array): " << SumFunction<float>(my_array) << "\n";
	

	std::vector<int> my_vec{ 1, 2 , 3, 4, 5 };
	std::cout << "Sum Template (Vector): " << SumFunction<int>(my_vec) << "\n";
}
