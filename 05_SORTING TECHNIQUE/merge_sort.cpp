#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &arr , int low , int mid , int high)
{
vector<int > temp = {};
int left = low ;
int right = mid + 1 ;

while ((left <= mid && right <= high))

{
   if (arr[left]<= arr[right])
   {
    temp.push_back(arr[left]);
    left++;
   }
else 
{
    temp.push_back(arr[right]);
    right++;
}
}

while (left <= mid)
{
   
   
    temp.push_back(arr[left]);
    left++;
   
}

while (right<= high)
{
   temp.push_back(arr[right]);
   right ++;  
}

for (int i = low ; i <= high; i++)
{
    arr[i]= temp[i-low];
}

}
void merg_sort(vector<int> &arr, int low, int high)
{
if (low >= high) return;

int mid = (low + high) / 2 ;
merg_sort(arr, low , mid);
merg_sort(arr, mid+1, high);
merge(arr, low , mid , high);


}


int main()
{

       
   vector<int > arr1 = {8,6,3,9,0,3};
   int low = 0;
   int high = 5;
   cout<<"array befor merge sort"<<endl;

 for (int i = low; i <= high ; i++)
 {
    cout<< arr1[i]<<" "; }
   
merg_sort( arr1, low , high);

cout<<"\n";
 cout<<"array after merge sort"<<endl;

 for (int i = low; i <= high ; i++)
 {
    cout<< arr1[i]<<" "; }




return 0 ;




}