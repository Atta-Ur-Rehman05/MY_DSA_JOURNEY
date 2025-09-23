#include<iostream>
#include<vector>
#include<algorithm>


using namespace std ;

bool check_sorting(vector<int> &arr, int n )
{

for(int i = 1; i < arr.size(); i++)
{
    if (arr[i]> arr[i-1])
    {
    
    }
    else return false;
  
}

  return true ; 

}




int main()
{
    vector<int> arr = {3,4,6,8,9,60};
    int n = arr.size(); 
    bool result = check_sorting(arr,n);
    cout<< result;
  
    return 0 ;
}
