#include <iostream>
#include <array>

using namespace std;

void print(const int *const arr,int size){
    for (int i=0; i< size;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void apply_all(const int* const arr1, int size1, const int* const arr2, int size2){
    int *new_array ={};
    int index = 0;
    // int size = sizeof(arr1)/sizeof(int);
    new_array = new int[size1*size2];
    for (int i=0;i<size1;i++){
        for (int j=0;j<size2;j++){
            new_array[index] = arr1[i]*arr2[j];
            // cout << new_array[index];
            index++;
        }
    }
    print(new_array,size1*size2);
    // return new_array;
}

int main(){
    int array1[] = {1,2,3,4,5};
    int array2[] = {10,20,30};
    print(array1,5);
    print(array2,3);
    apply_all(array1,5,array2,3);
    // print(result_arr,15);

}