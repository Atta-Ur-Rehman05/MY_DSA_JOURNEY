#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int uniqueValue(vector<int> arr , int n)
{
int ans = 0 ;
for(int i =  0 ; i < n ; i++)
{
    ans = ans ^ arr[i];
}

return ans ;
}




int main()
{
    vector<int> arr = {3,3,5,8,8,6,6};
    int n = arr.size(); 
    int unique_value = uniqueValue(arr,n);
    cout <<  "unique value is  "<< unique_value;
    return 0 ;
}