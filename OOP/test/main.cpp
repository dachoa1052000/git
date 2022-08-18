#include <iostream>
#include <cstring>
using namespace std;

class Maytinh
{
public:
    int chieuDai{20};
    int chieuRong{10};
    // string tenHang;
    int getLength() { return chieuDai; }
};

class MayAsus : public Maytinh
{
public:
    int length;
};

int main()
{
    MayAsus may1;
    may1.chieuDai = 5;
    int a{0};
    a = may1.getLength();
    cout << a << endl;
}