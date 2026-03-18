#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void bubble_sort(vector<int> arr, int n)
{

for(int i = n-1 ; i >=1; i--)

{

    for (int j = 0; j <= i-1; j++)
    {
        if (arr[j]> arr[j+1])
        {
            int temp = arr[j+1];
            arr[j+1]= arr[j];
            arr[j] = temp;
        }
    }

}
cout<<"\n\narray after sorting...\n"<<endl;

for (int i = 0 ; i < n ; i++)
{

    cout << arr[i]<<" ";
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
bubble_sort(arr1,n);







    
}