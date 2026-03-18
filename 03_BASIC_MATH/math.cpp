
#include<iostream>
#include<math.h>
using namespace std;
// count digits
int count_digit(int n)

{
 int count = 0 ;
 while ( n > 0)
 {
 int ld   =  n % 10;
 n /=10;
 count++;


 }
return count;

}
// reverse number
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
// print all divisor
int divisor(int n)
{
for (int i = 1 ; i <= n ; i++)
{
if (n%i == 0)
{
cout<< i << endl;

}


}


}
// armstrong number
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
//  prime number
 int prime_No(int n )
{ int count = 0 ;
for (int i = 1 ; i <= n ; i++)
{
if (n%i == 0)
{
 count++;

}


}
if (count == 2)
{
    cout<<"its prime number"<<endl;
}
else 
cout << " not prime number";

}
// find gcd
int  gcd_print(int n1,int n2)
{   int gcd = 1;
    for(int i = 1 ; i <= min(n1,n2); i++)
    {
        if (n1% i == 0 && n2 % i == 0)
        {
            gcd = i;

        }

    }

return gcd;
}


int main()
{
 
    int gcd1 = gcd_print(25,50);
   cout << gcd1;





}