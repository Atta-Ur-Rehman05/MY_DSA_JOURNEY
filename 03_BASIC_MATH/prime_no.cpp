#include<iostream>
using namespace std;

 void prime_No(int n )
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

int main()
{
  prime_No(2556);
   

}