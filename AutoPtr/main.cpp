#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
	A(int a) { std::cout << "construct" << std::endl; }
	~A() { std::cout << "deconstruct" << std::endl; }
};


void fun(std::shared_ptr<A> p) 
{
	auto m = p;
	return m;
}

int main()
{
	std::shared_ptr<A> p = std::make_shared<A>(10);
	fun(p);
	return 0;
}
