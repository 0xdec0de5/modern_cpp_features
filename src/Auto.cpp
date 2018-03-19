#include <iostream>
#include <map>
#include <string>

using namespace std;

namespace ns_auto
{
	int main()
	{
		map<string, int> m;

		const auto first = pair<string, int>("First", 10);
		const auto second = pair<string, int>("Second", 1);
		const auto third = pair<string, int>("Third", 5);

		m.insert(first);
		m.insert(second);
		m.insert(third);

		/*map<string, int>::iterator*/ auto it = begin(m);
		for (; it != std::end(m); it++)
		{
			cout << it->first << " : " << it->second << endl;
		}

		return 0;


	}
}