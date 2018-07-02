#include <iostream>

struct Data 
{
    int     data0;
    int     data1;
    short   data2;
    short   data3;
    Data() : data0(0), data1(1), data2(0), data3(0) {}
};


int main(int argc, char const *argv[])
{
    Data data;

    data.data0=1000;
    data.data1=2000;
    data.data2=3000;
    data.data3=4000;
    
    std::cout << "----- address -----\n";
    std::cout << "&data.data0=" << &data.data0 << std::endl;
    std::cout << "&data.data1=" << &data.data1 << std::endl;
    std::cout << "&data.data2=" << &data.data2 << std::endl;
    std::cout << "&data.data3=" << &data.data3 << std::endl;
    std::cout << "----- data -----\n";
    std::cout << "data.data0=" << data.data0 << std::endl;
    std::cout << "data.data1=" << data.data1 << std::endl;
    std::cout << "data.data2=" << data.data2 << std::endl;
    std::cout << "data.data3=" << data.data3 << std::endl;

    std::cout << "----- modify -----\n";
    // modify data0
    int*        p=&data.data0;
    std::cout << "*p        = " << *p << std::endl;
    *p=5000;
    std::cout << "data.data0= " << data.data0 << std::endl;

    // modify data1
    std::cout << "*(p+1)        =" << *(p+1) << std::endl;
    *(p+1)=6000;
    std::cout << "data.data1= " << data.data1 << std::endl;

    // error
    // pはint型へのポインタですので、short型変数data2を指している時でもint型サイズの領域をポイントします。
    // 従って、最後の*(p+2)はdata2とdata3の領域を纏めてint型変数として処理してしまいます。
    // そのため、*(p+2)を出力した値は不可解な値ですし、設定するとdata3が0クリアされてしまいます。（これは7000の上位2バイトが0だからです。）
    std::cout << "*(p+2)        =" << *(p+2) << std::endl;
    *(p+2)=7000;
    std::cout << "data.data2= " << data.data2 << std::endl;
    std::cout << "data.data3= " << data.data3 << std::endl;

    return 0;
}
