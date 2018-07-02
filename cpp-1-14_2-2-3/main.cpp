#include <iostream>
 
int*    gPointer;
 
void foo()
{
    int foo_data=1000;
    std::cout << "&foo_data=" << &foo_data << "\n";
    gPointer=&foo_data;
}
 
void bar()
{
    int bar_data=2000;
    std::cout << "&bar_data=" << &bar_data << "\n";
}
 
int main()
{
    foo();
    bar();
    std::cout << "*gPointer=" << *gPointer << "\n";
 
    return 0;
}