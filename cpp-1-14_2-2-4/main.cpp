#include <iostream>
#include <vector>


int main(int argc, char const *argv[])
{
    std::vector<int> array;
    int* count3=nullptr;

    
    for(std::size_t i = 0; i < 5; i++)
    {
        int input;
        std::cout << "[" << i << "] number? ";
        std::cin >> input;

        array.push_back(input);
        
        if (i == 3) {
            count3=&array[i];
        }
        std::cout << "array[" << i << "]=" << array[i] << "/n" << std::endl;
    }

    std::cout << "------------/n";
    *count3=*count3*10;
    std::cout << "*count3 =" << *count3  << std::endl;
    std::cout << "array[3]=" << array[3] << std::endl;
 
    std::cout << "count3   =" << count3  << std::endl;
    std::cout << "&array[3]=" << &array[3] << std::endl;

    
    return 0;
}
