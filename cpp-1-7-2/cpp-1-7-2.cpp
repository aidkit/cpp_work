#include <iostream>

int main(int argc, char const *argv[])
{
    int number;
    std::cout << "number ?";
    std::cin >> number;
    
    do
    {
        if ((number % 2) == 0)
        break;

        if ((number % 3) == 0)
        break;

        std::cout << "number is not a multiple of 2 and 3. \n";
    } while (false);
    
    std::cout << "number=" << number << "\n";

    return 0;
}
