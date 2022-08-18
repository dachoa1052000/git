// menu
#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>
#include <algorithm>
#include <numeric>
using namespace std;
vector<int> vec = {1, 2, 3, 4};

void print_nums() // function P
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

void add_a_numbers() //function A
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    vec.push_back(num);
    cout << "Done" << endl;
}

void caculate_average() //function C
{
    double sum;
    for (int i = 0;i<vec.size();i++){sum += vec[i];}
    cout << "Average = " << round(sum/vec.size()*100)/100 << "\n";
}

int main()
{
    double average = 0.0;
    int num;
    char sl; // select
    // cin >> sl;
    do
    {
        cout << "P: Print array" << endl;
        cout << "A: Add a number" << endl;
        cout << "C: Caculate average" << endl;
        cout << "Q: Quit" << endl;
        cout << "Your Selection: ";
        cin >> sl;
        sl = toupper(sl);
        switch (sl)
        {
        case 'P':
            print_nums();
            break;
        case 'A':
            add_a_numbers();
            break;
        case 'C':
            caculate_average();
            break;
        case 'Q':
            break;
        default:
            cout << "Unknow, try again" << endl;
            break;
        }
    } while (sl != 'Q');
}