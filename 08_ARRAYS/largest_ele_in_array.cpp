#include<iostream>
#include<vector>
#include<algorithm>


using namespace std ;

int largest_element(vector<int> &arr, int n )
{
int largest = arr[0];
for(int i = 0; i < arr.size(); i++)
{
    if (arr[i]> largest)
    {
        largest = arr[i];
    }
}


return largest;
}




int main()
{
    vector<int> arr = {3,5,4,6,8,0,4,60};
    int n = arr.size(); 
    int largest_ele = largest_element(arr,n);
    cout << "largest in array is "<< largest_ele;
    return 0 ;
}
