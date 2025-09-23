#include<iostream>
using namespace std;

void armstrong(int n)
{
int copy = n;
int sum = 0;
while (copy > 0)
{
int ld = copy % 10 ;
copy/=10;
sum = sum + (ld*ld*ld);
}
if (sum == n)
{
    cout <<"its armstrong";

}
else
cout << "not armstrong number";

}

int main()
{
  armstrong(2556);
   

}