#include <iostream>
#include <initializer_list>
#include <print>

class UDT
{
	std::initializer_list<int> m_data;
public:
	UDT(std::initializer_list<int> a) : m_data(a) {}

	void PrintData() const {
		for (const auto& item : m_data)
		{
      // print()/println() are a c++23 feature
			std::print("{} ", item);
		}
		std::println();
	}
};

int main()
{
	UDT user{ 1,2,3,4,5 };
	user.PrintData();
}
