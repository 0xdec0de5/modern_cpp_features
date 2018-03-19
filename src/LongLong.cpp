#include <iostream>

namespace ns_longlong
{
	int main()
	{
		unsigned long long massiveInteger = 0xffffffffffffffff;

		std::cout << "sizeof(massiveInteger) =\t" << sizeof(massiveInteger) << std::endl;
		std::cout << "massiveInteger =\t" << massiveInteger;

		return 0;
	}
}