#include<iostream>
using namespace std ;


// intro to recursion
//print name 5 times using recusion  
void print(int i , int n )
{
    
if (i > n)return ; 

cout<<"atta"<< endl;
print(i + 1, n);

}

int main()
{
print(1,5);

}