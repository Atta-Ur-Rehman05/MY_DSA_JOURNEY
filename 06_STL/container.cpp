#include<bits/stdc++.h>
using namespace std;

int uniValue(vector<int> vec)
{
int ans = 0;
for(auto i : vec){
    ans= ans^i;
    return ans;
}



}


int main(){
    // let start container with vector

    vector<int> vec = {1,1,4,5,4,3,7,3,7,7};

    // to print vector we have many ways like loop but we would prefer iterator coz its universal way 
    //whatever the container it always provide uniform way to acces element


    //for each loop
    /*
    for (auto i : vec){
        cout<< i <<" "; 
    }
        */

    for(auto it = vec.begin(); it!= vec.end(); it++){
        cout<< *(it)<<" ";
    }


    // following are vector function
/*
    vec.push_back(55);
    vec.insert(vec.begin(),44);
    vec.pop_back();
    vec.size();
    vec.at(3);
*/


// print unique value in vector
cout<< uniValue(vec);

}