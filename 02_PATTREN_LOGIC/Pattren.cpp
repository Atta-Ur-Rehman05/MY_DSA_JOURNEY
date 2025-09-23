#include<iostream>
using namespace std;
// 
void pattren1(int n)
{
/*
pattren 1

* * * 
* * *
* * *

*/




  for(int i = 0 ; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
        cout<<"* ";

    }
    cout<<endl;

  }


}
void pattren2(int n)

{
    /*
                        * 
                        * *           pattren 2          
                        * * *
                        * * * *
    
    
    */
 for(int i = 0 ; i < n; i++)
  {
    for(int j = 0; j <=i; j++)
    {
        cout<<"* ";

    }
    cout<<endl;

  }


}
void pattren3(int n)

{/*
    pattren 3
    1
    12
    123
    1234
    
    
    
    */


 for(int i = 1 ; i <= n; i++)
  {
    for(int j = 1; j <=i; j++)
    {
        cout<<j ;

    }
    cout<<endl;

  }



}
void pattren4(int n)

{/*
    1
    22          pattren 4
    333
    4444
    
    */

 for(int i = 1 ; i <= n; i++)
  {
    for(int j = 1; j <=i; j++)
    {
        cout<<i ;

    }
    cout<<endl;

  }


}
void pattren5(int n)

{/*
    * * * *         pattren 5
    * * *
    * *
    *
    
    
    */
 for(int i = 1 ; i <= n; i++)
  {
    for(int j = 1; j <= n-i+1; j++)
    {
        cout<<"* " ;

    }
    cout<<endl;

  }






}
void pattren6(int n)
{/*
    1 2 3 4         pattren 5
    1 2 3
    1 2
    1
    
    
    */
 for(int i = 1 ; i <= n; i++)
  {
    for(int j = 1; j <= n-i+1; j++)
    {
        cout<<j ;

    }
    cout<<endl;

  }





}
void pattren7(int n)

{/*
    1 2 3 4         pattren 5
    1 2 3
    1 2
    1
    
    
    */
 for(int i = 1 ; i <= n; i++)
  {
    for(int j = 1; j <= n-i+1; j++)
    {
        cout<<j ;

    }
    cout<<endl;

  }





}

void pattren8(int n)
{
 for (int i = 0; i < n; i++)
 {
  // spaces
  for (int j = 0 ; j < n-i+1; j++)
  {
    cout<<" ";
  
  }
  // stars

for (int j = 0 ; j <2*i+1; j++)
  {
    cout<<"*";
  
  }
  // spaces
for (int j = 0 ; j < n-i+1; j++)
  {
    cout<<" ";
  
  }


cout<<endl;

}






}

void pattren9(int n)
{
 for (int i = 0; i < n; i++)
 {
  // spaces
  for (int j = 0 ; j < i; j++)
  {
    cout<<" ";
  
  }
  // stars

for (int j = 0 ; j <2*n -(2*i+1); j++)
  {
    cout<<"*";
  
  }
  // spaces
for (int j = 0 ; j < i; j++)
  {
    cout<<" ";
  
  }


 cout<<endl;

}
}








int main()
{
 int n ;
 cout<<"entr n : "<<endl;
 cin>> n;
 pattren8(n);
 pattren9(n);







 return 0;
}