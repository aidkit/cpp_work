#include <iostream>

enum class Foo1
{
    none,        // 0
    symbolA,     // 1
    symbolB      // 2
};
 
enum class Bar1
{
    none=10,     // 10
    bar1,        // 11
    bar2         // 12
};

struct Foo
{
    int     mData;  // member variable
 
    // constructor
    Foo(int iData) : mData(iData)
    {
        std::cout << "Foo(" << iData << ")\n";
    }
};
 
struct Bar
{
    int     mData;  // member variable
    Foo     mFoo;   // member variable
 
    // constructor
    Bar() : mData(0), mFoo(456)
    {
        std::cout << "Bar()\n";
    }
};
 

 //  main()関数の先頭で、構造体Bar型の変数barを定義しています。
// この時、bar用のメモリが通常のローカル変数と同様にスタック上に確保され、
// 続けてBarのコンストラクタが呼び出されます。構造体Barのコンストラクタは以下のように処理されます。

// 1.mDataを0で初期化
// 2.mFooのコンストラクタを呼び出して456を渡す
// 3.std::cout << "Bar()\n"実行

int main()
{
    Bar bar;
 
    std::cout << "\n";
    std::cout << "bar.mData       = " << bar.mData << "\n";
    std::cout << "bar.mFoo.mData  = " << bar.mFoo.mData  << "\n";
 
    bar.mData=123;
 
    std::cout << "\n";
    std::cout << "bar.mData       = " << bar.mData << "\n";
    std::cout << "bar.mFoo.mData  = " << bar.mFoo.mData  << "\n";
 


    return 0;
}