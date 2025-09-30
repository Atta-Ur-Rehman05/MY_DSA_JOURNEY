#include<iostream>
#include<vector>
#include<algorithm>


using namespace std ;

int seclargest_element(vector<int> &arr, int n )
{
int largest = arr[0];
int seclargest = -1;
for(int i = 0; i < arr.size(); i++)
{
    if (arr[i]> largest)
    {
        seclargest = largest;
        largest = arr[i];
    }
    if (arr[i] < largest && arr[i] > seclargest)
    {
        seclargest = arr[i];
    }
}


return seclargest;
}




int main()
{
    vector<int> arr = {3,5,4,6,8,0,4,60};
    int n = arr.size(); 
    int sec_largest_ele = seclargest_element(arr,n);
  
    cout<< "sec largest in array is "<< sec_largest_ele;
    return 0 ;
}
