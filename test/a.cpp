#include <iostream>
using namespace std;

void swap(int a, int b){
    int tg;
    tg = a;
    a = b;
    b = tg;
    cout << a << " " <<  b;
}

int main(){
    int a,b;
    cin >> a >> b;
    swap(a,b);
    cout << a << " " << b;
    cout << "test" << endl;
    cout << "test 22/8" << endl;
}
