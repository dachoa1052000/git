#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <typeinfo>
#include <cmath>
using namespace std;

int calculate_pairs(vector<int> vec)
{
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result=0;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            result += vec[i] * vec[j];
        }
    }

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}
void strings_and_functions() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    char first_name[7]= "Bjarne";
    // int first_name_length = first_name.length();
    char last_name[11] = "Stroustrup";
    // int last_name_length = last_name.length();
    char whole_name[17];
    strcpy(whole_name,first_name);
    strcat(whole_name,last_name);
    int first_name_length = strlen(first_name);
    int last_name_length = strlen(last_name);
    int whole_name_length = strlen(whole_name); 
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";
}

void cpp_strings(){
    string unformatted_full_name = "StephenHawking";
    string first_name = unformatted_full_name.substr(0,7);
    string last_name = unformatted_full_name.substr(7,7);
    string formatted_full_name = first_name+last_name;
    formatted_full_name.insert(7," ");
    cout << formatted_full_name;
}

void c_math_function(){

    double bill_total {102.78};
    int number_of_guests {5};
    double individual_bill = bill_total/number_of_guests;
    double individual_bill_1 = floor(individual_bill);
    double individual_bill_2 = round(individual_bill);
    double individual_bill_3 = ceil(individual_bill*100)/100;
    
}

double fahrenheit_to_celsius(double temperature){
    double result;
    result = round(5.0/9.0)*(temperature-32);
    return result;
}

double fahrenheit_to_kelvin(double temperature){
    double result;
    result = round(5.0/9.0)*(temperature-32) + 273;
    return result;
}

int main()
{
    int j=0;
    int arr[] = {3,2,1,4,3,2,1,11,1111,999};
    // sort(arr,arr+arr.size());
    // for (int i = 0;i < sizeof(arr); i++){
    //     cout << arr[i] << " ";
    // }

    vector<int> vec = {1,2,3,4,5,3,2,1,2};
    sort(vec.begin(),vec.end());
    for (int i=0;i<vec.size();i++){
        cout << vec[i]<< " " ;
    }
    //cout << typeid(vector).name() << endl;
    cout << typeid(j).name() << endl;
}
