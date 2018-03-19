#include <iostream>
#include <type_traits>

namespace ns_StaticAssert
{
	template<typename T>
	class A
	{
	public:
		static_assert(std::is_default_constructible<T>::value,
			"T doesn't have a default constructor!");
	};

	class B
	{
	public:
		float val;
		B(float f) : val(f) {}
	};

	int main()
	{
		A<int> clazz1; // pass since int has a default constructor
		/*A<B> clazz2;*/ // will error since B doesn't meet the is_default_constructable

		return 0;
	}
}