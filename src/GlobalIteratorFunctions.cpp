#include <vector>
#include <iostream>
#include <algorithm>

namespace ns_GlobalIteratorFunctions
{
	int main()
	{
		//C++98 Way
		int size = 10;
		int temp[10] = { 0, 10, 15, 20, 25, 30, 15, 40, 45, 50 };
		std::vector<int> v(&temp[0], &temp[size]);

		int count = std::count(v.begin(), v.end(), 15);
		std::cout << "15 is found " << count << " in the vector" << std::endl;

		//Modern Way
		std::vector<int> v2(std::begin(temp), std::end(temp));
		count = std::count(std::begin(v2), std::end(v2), 15);

		std::cout << "15 is found " << count << " in the vector with free functions" << std::endl;

		return 0;
	}
}