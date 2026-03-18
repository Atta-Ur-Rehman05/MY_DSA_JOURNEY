#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int Binary_search(vector<int> &arr, int size )
{
int target = 10 ;
int low = 0;
int high = size-1;
int mid = (low + high)/ 2 ;


while(low<=high)
{
    if(arr[mid]== target)
    {
        cout<< "value found at position "<< mid +1 <<endl;
        break;
    }
    else if (arr[mid] < target)
    {
        low = mid + 1 ;
    }
    else 
    {
        high = mid - 1 ;
    }
    
   mid = (low + high)/ 2 ;
}



return mid  ;
}

int main()
{
    vector<int> arr = {1,3,4,5,8,9,10,16,19,20};
    int n = arr.size(); 
    int target_index = Binary_search(arr,n);
    cout <<  "index of the target value is "<< target_index;
    return 0 ;
}