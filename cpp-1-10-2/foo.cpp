#include <iostream>
#include "foo.h"


 
void foo()
{
    std::cout << "foo(0)  baz=" << baz << "\n";
    baz=20;
    std::cout << "foo(1)  baz=" << baz << "\n";
}