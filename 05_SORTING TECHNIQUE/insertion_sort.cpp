#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertion_sort(vector<int>arr, int n)
{

for (int i = 0 ; i < n ; i++)

{
int j = i ;
while(j>0 && arr[j-1] > arr[j])
{
    int temp = arr[j-1];
    arr[j-1] = arr[j];
    arr[j]= temp;
    j--;
}

}

cout<<"array after sorting"<<endl;
for(int i = 0 ; i < n ; i++)
{
    cout<<" "<<arr[i];
}

}


int main()
{


 vector<int > arr1 = {8,6,3,9,0,3};
 int n = arr1.size();

 cout<<"\n\narray before sorting...\n"<<endl;

for (int i = 0 ; i < n ; i++)
{

    cout << arr1[i]<<" ";
}

cout<<"\n";
insertion_sort(arr1,n);

return 0 ;
}