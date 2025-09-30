#include<iostream>
using namespace std ;

int binary_To_Deci(int decimal)
{
int ans = 0 , pow = 1 ;

while ((decimal > 0))
{
    int rem = decimal % 2 ;
    decimal /= 2 ;

    ans += rem * pow ;
    pow *= 10 ;
}


return ans ;

}

int main()
{
     int num;
    cout<< "enter decimal value"<<endl;
   
    cin>> num;
 int dicimal = binary_To_Deci(num);
 cout << dicimal;





    return 0;
}