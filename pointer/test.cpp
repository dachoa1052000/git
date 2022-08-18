#include <iostream>
using namespace std;

int main()
{
    int score[] {100,95,89};
    // int *score_ptr{score}; //không cần dấu & trước score bởi mảng thực chất cũng là 1 con trỏ và &arr[0] tương đương với &arr tương đương với arr
        cout << *(score+1) << endl;
        cout << &score[1] << endl;
    // cout << score_ptr[0] << endl;
} 