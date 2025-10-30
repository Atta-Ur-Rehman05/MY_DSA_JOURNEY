#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

void left_rotate(vector<int> &arr , int n)
{
int temp =arr[0];
for(int i =  1 ; i < n ; i++)
{
     arr[i-1] = arr[i];
      
     

}
arr[n-1] = temp;


}



int main()
{
    vector<int> arr = {3,3,5,8,8,6,6};
    int n = arr.size(); 
 cout<< "array befor rotate "<<endl;
    for(auto it : arr){
        cout << it <<endl;
    }
    left_rotate(arr,n);

    cout<< "array after rotate "<<endl;
    for(auto it : arr){
        cout << it <<endl;
    }
    return 0 ;
}