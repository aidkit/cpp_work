#include <iostream>

struct Foo
{
    unsigned mData0;
    int      mData1;
    Foo(unsigned iData0, int iData1) : mData0(iData0), mData1(iData1) { }
};

int main()
{
    Foo foo(123, 456);
    Foo* aFoo=&foo;
    std::cout << aFoo->mData0 << std::endl;
    std::cout << aFoo->mData1 << std::endl;
    return 0;
}

