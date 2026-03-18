#include<iostream>
using namespace std;



int reverse(int n)
{
 int reverse = 0 ;
 while ( n > 0)
 {
 int ld   =  n % 10;
 n /=10;
 reverse= reverse*10+ld;
 }

 
return reverse;
 }

int main()

{
 
    int reverse1 = reverse(2556);
   cout << reverse1;





}