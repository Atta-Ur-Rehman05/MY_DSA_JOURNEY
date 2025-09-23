#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int function(vector<int> &arr, int low , int high)

{
int pivot = arr[low];
int i = low;
int j = high;

while ((i<j))
{
    while ((arr[i]<= pivot && i<= high - 1))
    {
        i++;
    }
    
    while(arr[j] > pivot && j>= low + 1)
    {
        j--;
    }

    if (i < j)
    {
        swap(arr[i], arr[j]);
    }


}

swap(arr[low], arr[j]);

return j ;
}
void quick_sort(vector<int> &arr, int low , int high)

{

    if (low< high){
    int pindex = function(arr,low, high);
quick_sort(arr, low, pindex - 1);
quick_sort(arr, pindex + 1, high);
    }
}

int main ()
{
     
   vector<int > arr1 = {8,6,3,9,0,3};
   int low = 0;
   int high = 5;
   cout<<"array befor quick sort"<<endl;

 for (int i = low; i <= high ; i++)
 {
    cout<< arr1[i]<<" "; }
   
quick_sort( arr1, low , high);

 cout<<"array after quick sort"<<endl;

 for (int i = low; i <= high ; i++)
 {
    cout<< arr1[i]<<" "; }




return 0 ;
}