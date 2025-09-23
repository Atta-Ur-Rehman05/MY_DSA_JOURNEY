#include<iostream>
using namespace std;

void pattren1(int n)
{
  for(int i = 0 ; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
        cout<<"* ";

    }
    cout<<endl;

  }


}



int main()
{
 int n ;
 cout<<"entr n : "<<endl;
 cin>> n;
 pattren1(n);






return 0;
}