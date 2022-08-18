#include <iostream>
#include <cstring>
using namespace std;

string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRXTUVWXYZ";
string key = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm";

string ma_hoa(string str)
{
    string result;
    // int length = strlen(str);
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < alphabet.length(); j++)
        {
            if (str[i] == alphabet[j])
            {
                result += key[j];
                continue;
            }
            else if (j == alphabet.length())
            {
                result += str[i];
            }
        }
    }
    return result;
};
string giai_ma(string);

int main()
{
    string strinput;
    cout << "input string:" << endl;
    getline(cin,strinput);
    // cout << strinput;
    string result = ma_hoa(strinput);
    cout << "Result: " << result;
}