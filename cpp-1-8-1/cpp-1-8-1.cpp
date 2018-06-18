#include <iostream>

// プロトタイプ宣言
void hello(char const* , int);


int main(int argc, char const *argv[])
{
    hello("C++", 10);

    return 0;
}

// function
void hello(char const* to, int count)
{
    for(int i=0; i < count; i++)
    {
        std::cout << "Hello, " << to << "!\n";
    }
}