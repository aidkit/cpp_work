
#include <iostream>

int* foo()
{
    int x=10;
    std::cout << "foo() : x=" << x << "\n";
    return &x;
}

int bar()
{
    int y=20;
    std::cout << "foo() : y=" << y << "\n";
    return y;
}


int main(int argc, char const *argv[])
{
    int* x=foo();
    int  y=bar();

    std::cout << "x=" << *x << "\n";
    std::cout << "y=" << y << "\n";
    return 0;
}
