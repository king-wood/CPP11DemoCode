#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
	A(int a) { std::cout << "construct" << std::endl; }
	~A() { std::cout << "deconstruct" << std::endl; }
};

int main()
{
	{
		std::shared_ptr<A> p = std::make_shared<A>(10);
	}
	return 0;
}
