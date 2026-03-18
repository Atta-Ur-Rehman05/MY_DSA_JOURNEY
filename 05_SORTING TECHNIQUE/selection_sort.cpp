#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



void selection_sort(vector<int> &arr, int n)
{

    for (int i = 0 ; i < n ; i++)
    {
        int min = i ;

        for (int j = i ; j<n ; j++)
        {
            if (arr[j]< arr[min])  min = j ;
        }
      int temp = arr[min];
      arr[min] = arr[i];
      arr[i]= temp;

    }

}



int main()
{
 vector<int > arr1 = {8,6,3,9,0,3};
 int n = arr1.size();

 cout<<"\n array before sorting...\n"<<endl;

for (int i = 0 ; i < n ; i++)
{

    cout << arr1[i]<<" ";
}

cout<<"\n";
selection_sort(arr1,n);

cout<<"\n\narray after sorting...\n"<<endl;

for (int i = 0 ; i < n ; i++)
{

    cout << arr1[i]<<" ";
}

return 0 ;
}