#include <iostream>

void foo(char const* from)
{
    std::cout << "foo() called from " << from << ".\n";
}

void bar()
{
    foo("bar()");
    std::cout << "    in bar()\n";
}


int main(int argc, char const *argv[])
{
    foo("main()");
    std::cout << "    in main()\n";

    bar();
    
    return 0;
}
