#include <iostream>
#include "foo.h"


 
int main()
{
    baz=10;
    std::cout << "main(0) baz=" << baz << "\n";
    foo();
    std::cout << "main(1) baz=" << baz << "\n";
 
    return 0;
}