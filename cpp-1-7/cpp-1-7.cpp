#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    int i=10;

    while(i){           // iが0でない間繰り返す
        std::cout << "(1)i=" << i << "\n";
        --i;
    }
    std::cout << "(2)i=" << i << "\n";

    while(++i < 10)     // iが10未満の間、繰り返す
        ;
    std::cout << "(3)i=" << i << "\n";

    while(true)         // 無限ループだが、途中でbreakする
    {
        std::cout << "(4)i=" << i << "\n";
        if (i < 5)
        {
    break;
        }
        i--;
    }
    std::cout << "(5)i=" << i << "\n";

    while(i < 10)       // iが10未満の間繰り返す
    {
        i++;
        if(i % 2)       // iが奇数ならスキップする
        {
    continue;        
        }
        std::cout << "(6)i=" << i << "\n";
    }
    std::cout << "(7)i=" << i << "\n";

    return 0;
}
