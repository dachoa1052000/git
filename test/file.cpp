#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string myText; //dùng để lưu dòng saukhi đọc file

    //create and open txt file 
    ofstream MyFile("filetest.txt");

    //write to file 
    string text = "12345";
    MyFile << text << endl;

    //close file 
    MyFile.close();

    //read text file
    ifstream MyReadFile("file2.txt");

    //dùng while do cùng với getline() để đọc từng dòng
    while (getline(MyReadFile,myText)){
        cout << myText << "\n";
        //if (myText == "") {break;}
        //cout << myText;
    };
    MyReadFile.close();
}