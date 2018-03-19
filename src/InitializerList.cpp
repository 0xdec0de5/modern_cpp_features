#include <iostream>
#include <vector>

using namespace std;

int main()
{
	initializer_list<int> ints = { 2, 4, 6, 8, 10, 12, 14 };

	cout << ints.size() << endl;

	auto it = rbegin(ints);
	for(; it != rend(ints); it++)
	{
		cout << "i = " << *it << ", ";
	}

	vector<int> v(ints);

	for(auto a : v)
	{
		cout << "v = " << a << ", ";
	}

	return 0;
}