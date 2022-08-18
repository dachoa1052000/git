#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string str,substr;
    cout << "Input string:";
    cin >> str;
    for (int i=0; i<str.length();i++){
        for (int j=0; j<str.length()-i-1;j++){
            cout << " ";
        }//vong for dung de in khoang trang o truoc 
        substr = str.substr(0,i+1);
        cout << substr;
        for (int index=substr.length()-2;index>=0;index--){
            cout << substr[index];
        }
        cout << "\n";
    }
    for (int i=0; i<str.length();i++){
        substr = str.substr(0,i+1);
        cout << substr << " ";
    }

}