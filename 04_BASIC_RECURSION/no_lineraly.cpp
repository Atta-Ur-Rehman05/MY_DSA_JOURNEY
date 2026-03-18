#include<iostream>
using namespace std;

//print form 1 to n linearly using recursion 
void print_no_lineraly(int i , int n )
{
    if (i > n) return ; 
cout<< i << endl;
print_no_lineraly(i + 1, n);

}

int main()
{
print_no_lineraly(1,5);

}