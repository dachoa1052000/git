/*chuyển đổi coin ví dụ 92cent = 0đô + 3quarters + 1dimes + 1 nickels + 2 pennies
1 đô = 100cents
1 quarter = 25
1 dime = 10
1 nickel = 5
1 penny =1*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> exchange(int n)
{
    vector<int> vec;
    int dollars = n/100;
    n = n - dollars*100;
    vec.push_back(dollars);
    // vec.push_back(2);
    int quarters = n/25;
    vec.push_back(quarters);
    vec.push_back(n-quarters*25);
    return vec;
}

int main()
{
    vector<int> vec;
    int number; // number of cents
    cout << "Enter an amount in cent: ";
    cin >> number;
    vec = exchange(number);
    for (int i=0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
}