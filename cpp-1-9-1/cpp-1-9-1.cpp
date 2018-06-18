#include <iostream>

void foo(double x, double y, double z)
{
    std::cout << "(x,y,z)=(" << x << "," << y << "," << z << ")\n";

    std::cout << "&x=" << &x <<"\n";
    std::cout << "&y=" << &y <<"\n";
    std::cout << "&z=" << &z <<"\n";
    
    double volume=x*y*z;
    double surface=(x*y + x*z + y*z)*2;

    std::cout << "volume=" << volume << " &volume=" << &volume << "\n";
    std::cout << "surface=" << surface << " &surface=" << &surface << "\n";

}
int main(int argc, char const *argv[])
{
    foo(10.1, 10.2, 10.3);
    return 0;
}
