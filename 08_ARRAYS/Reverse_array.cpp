#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

void Reverse_array(vector<int> &arr, int size )
{
int low = 0 , high = size -1 ;
while(low <= high)
{
    swap(arr[low],arr[high]);
    low++, high--;
}

cout<<"array after reversing"<<endl;
for (int i = 0 ; i<size ; i++)
{
    cout<< arr[i]<<" ";
}



}

int main()
{
    vector<int> arr = {3,5,6,8,0,4,60};
    int n = arr.size(); 

cout<<"array before reversing"<<endl;
for (int i = 0 ; i<n ; i++)
    {
        cout<< arr[i]<<" ";
    }

    cout<<endl;
    Reverse_array(arr,n);

    return 0 ;
}