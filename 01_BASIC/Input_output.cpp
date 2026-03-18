#include<iostream>
using namespace std;

<<<<<<< HEAD
void greeting(){
  string name;
  cout<< "enter your nam"<<endl;
  cin >> name;

  cout<< "hello " +  name;

}
int sum(int num1, int num2){
  
return num1 + num2;
}
void swapTwoNumbers(int &a, int &b){
  int temp = a;
  a=b;
  b=temp;
}
int AreaofRactangle(int l, int w){
  return l * w ;
}
int tempinfernhit(int temp){
  return  ((temp * 9/5) + 32);
}

=======
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
>>>>>>> 7695eb876c2180f8c170242e8afbd892569fd951



int main()
{
<<<<<<< HEAD
        /* int num,num3;
        cout<< "Enter num1 : ";
        cin>> num;
        cout<< "Enter num2 : ";
        cin>> num3;
        int result = sum(num,num3);
        cout<< result; */

        /*

        int num1, num2;

        cout << "Enter num1 : ";
        cin >> num1;

        cout << "Enter num2 : ";
        cin >> num2;

        cout << "values before swapping" << endl;
        cout << "num1== " << num1 << endl;
        cout << "num2== " << num2 << endl;

        swapTwoNumbers(num1, num2);

        cout << "value after swapping" << endl;
        cout << "num1== " << num1 << endl;
        cout << "num2== " << num2 << endl;
        */


/*
      int len, wid;
      cout << "Enter length : ";
              cin >> len;

              cout << "Enter width : ";
              cin >> wid;

              int area = AreaofRactangle(len,wid);
              cout<<"area of ractangle is "<< area;
*/

  int C;
  cout<< "enter temp in celcuis"<<endl;
  cin>> C;

  int ferhnhit = tempinfernhit(C);
  cout<< "temprature in fernhite is "<< ferhnhit;
=======
 int n ;
 cout<<"entr n : "<<endl;
 cin>> n;
 pattren1(n);
>>>>>>> 7695eb876c2180f8c170242e8afbd892569fd951






<<<<<<< HEAD
 return 0;
=======
return 0;
>>>>>>> 7695eb876c2180f8c170242e8afbd892569fd951
}