#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void insertion_value(vector<int>& arr, int value, int indx_position)
{
    // Insert at specified position
    arr.insert(arr.begin() + indx_position - 1, value);

    // Print the array after insertion
    cout << "Array after insertion: " << endl;
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {3,3,5,8,8,6,6};
    int val = 45;
    int position = 4;
    
    cout << "Original array: " << endl;
    for(int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    
    insertion_value(arr, val, position);
    return 0;
}