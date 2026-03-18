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




int main()

{
 
    int digits  = count_digit(25646);
   cout << digits;

}