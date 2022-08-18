// menu
#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>
using namespace std;

void print_nums(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
        cout << "\n";
    }
}

int main()
{
    cout << "P: Print array" << endl;
    cout << "A: Add a number" << endl;
    cout << "M: Display mean of numbers" << endl;
    cout << "Q: Quit" << endl;
    int num;
    vector<int> vec = {1, 2, 3, 4, 5, 6, 42, 1, 3};
    char sl; // select
    // cin >> sl;
    do
    {
    cout << "Your Selection: ";

        cin >> sl;
        toupper(sl);
        switch (sl)
        {
        case 'P':
            print_nums(vec);
            break;

        case 'A':
            cout << "Enter Number: ";
            cin >> num;
            vec.push_back(num);
            cout << "Done" << endl;
            break;
        default:
            cout << "Unknow, try again" << endl;
            break;
        }
    } while (sl != 'Q' && sl != 'q');
}