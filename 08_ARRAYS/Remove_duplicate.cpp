#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int removeDuplicates(vector<int> arr , int n)
{
int i = 0 ;
for(int j =  1 ; j < n ; j++)
{
     if (arr[j] != arr[i]){
        arr[i+1] = arr[j];
        i++;
     }

}

return i+1 ;
}



int main()
{
    vector<int> arr = {3,3,5,8,8,6,6};
    int n = arr.size(); 
    int unique_values = removeDuplicates(arr,n);
    cout <<  "number of unique value is  "<< unique_values;
    return 0 ;
}