// vector 

#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){
    for (int i=0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
}

void display2(vector<vector<int>> vec){
    for (int i=0; i< vec.size(); i++){
        for (int j=0; j < vec[i].size(); j++){
            cout << vec[i][j] << " ";
        }
    }
}

int main(){
    vector<int> vector1,vector2;
    vector<vector<int>> vector2d ;
    vector1.push_back(10);
    vector1.push_back(20);
    vector1.push_back(30);
    display(vector1);
    cout << "\n";
    vector2.push_back(100);
    vector2.push_back(200);
    // vector2.push_back(300);
    display(vector2);
    cout << "\n";

    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    display2(vector2d);
    vector1.at(0) = 1000;
    // display(vector2);

}