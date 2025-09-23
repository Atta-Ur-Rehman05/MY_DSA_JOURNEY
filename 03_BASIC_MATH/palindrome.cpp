#include<iostream>
using namespace std;



// check palindrome
bool palindrome(int n)

{
    int reverse = 0 ;
 int copy = n ;
 while ( copy > 0)
 {
 int ld   =  n % 10;
 n /=10;
 reverse= reverse*10+ld;


 }
 if (reverse == n) return "true";
return "false";

}

int main()
{
    int gcd1 = palindrome(2657);
   cout << gcd1;


}
