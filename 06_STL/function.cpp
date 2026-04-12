#include <bits/stdc++.h>
using namespace std;

// sum of two numbrs
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

// factorial of n
int fact(int n)
{

    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    return sum;
}

// sum upto n
int SumUptoN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

// check even and odd
void EvenOddCheck(int n)
{

    if (n % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd number";
    }
}

//sqaure of number
int NumSqaure(int n){
    return n*n;
}

int main()
{
    // cout<< sum(33,65);
    // cout<< fact(10);
    //cout << SumUptoN(10);
    //EvenOddCheck(5);
    // int square = NumSqaure(5);
    // cout<< square;


}
