#include<iostream>
using namespace std ;

int Deci_To_Bin(int decimal)
{
int ans = 0 , pow = 1 ;

while ((decimal > 0))
{
    int rem = decimal % 10 ;
    decimal /= 10 ;

    ans += rem * pow ;
    pow *= 2 ;
}


return ans ;

}

int main()
{
     int num;
    cout<< "enter binary number "<<endl;
   
    cin>> num;
 int binary = Deci_To_Bin(num);
 cout << binary;





    return 0;
}