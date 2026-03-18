#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int Linear_search(vector<int> &arr, int size )
{
int target = 4 ;
for(int i = 0 ; i < size ; i++)
{
    if(arr[i]== target)
    {return i ;}
    
    
}



return -1 ;
}

int main()
{
    vector<int> arr = {3,5,6,8,0,4,60};
    int n = arr.size(); 
    int target_index = Linear_search(arr,n);
    cout <<  "index of the target value is "<< target_index;
    return 0 ;
}