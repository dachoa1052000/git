#include <iostream>
using namespace std;

int addition(int value1, int value2) //hàm tính tổng 2 số 
{
    return value1 + value2;
}

void introduce()
{
    cout << "Hello" << endl;

}


int main(){
    cout << addition(1,2) << endl;
    introduce();
}