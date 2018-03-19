#include <iostream>
#include <string>

using std::cout;
using std::endl;

namespace ns_nullptr {

	void TheFunc(int a)
	{
		cout << "integer is overloaded!" << endl;
	}

	void TheFunc(int* a)
	{
		cout << "the pointer is overloaded!" << endl;
	}

	int main()
	{
		TheFunc(NULL);
		TheFunc(nullptr);

		return 0;
	}

}