#include <iostream>

struct Foo
{
    int     mData0;
    int     mData1;
};

int main(int argc, char const *argv[])
{
    Foo foo;
    Foo* foo_ptr=&foo;

    foo_ptr->mData0=789;
    foo_ptr->mData1=101112;
    

    std::cout << foo_ptr->mData0 << std::endl;
    std::cout << foo_ptr->mData1 << std::endl;
    
    return 0;
}
