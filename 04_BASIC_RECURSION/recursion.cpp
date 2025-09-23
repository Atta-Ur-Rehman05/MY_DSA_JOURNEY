#include<iostream>
using namespace std ;


// intro to recursion
//print name 5 times using recusion  
void print(int i , int n )

{
if (i <= n)return ; 

cout<<"atta"<< endl;
print(i + 1, n);



}
//print form 1 to n linearly using recursion 
void print_no_lineraly(int i , int n )

{
if (i <= n) return ; 
cout<< i << endl;
print_no_lineraly(i + 1, n);




}
//print form 1 to n linearly using recursion 
void print_no_lineraly1(int i , int n )
{
if (i < 1) return ; 

print_no_lineraly1(i - 1, n);

cout<< i << endl;


}
//print form n to 1 linearly using recursion 
void print_no_lineraly2(int i , int n )
{
if (i < 1) return ;
cout<< i << endl;
print_no_lineraly2(i - 1, n);




}
//print form 1 to n linearly using recursion 
void print_no_lineraly3(int i ,int n)

{
{
if (i >  n) return ; 

print_no_lineraly3(i + 1, n);

cout<< i << endl;


}




}
// sum of ist n number using recursion, perametarized approach 
void sum_ist_n_no(int i ,int n , int sum)
{

if (i > n){
cout<< sum;
return;}

    sum_ist_n_no(i+1,n, sum+i);


}
// solution 2 functional approach
int  sum_ist_n_no1(int n)
{

if (n==0){

return 0 ;}
return n + sum_ist_n_no1(n - 1);


}

// factorail by recursion parametarized way
void factorial(int i , int fact)
{

if (i <=1){
cout << fact;
return;}

factorial(i - 1, fact *i );

}
// factorail by recursion functional  way
int factorail1(int n )
{

if (n == 0){
return 1 ;

}
return n * factorail1(n-1);




}
// reverse an array using recursion
void reverse_array(int i , int r,int arr[])
{

if (i > r){
    return ;
}

swap(arr[i], arr[r]);
reverse_array(i+1,r-1,arr);





}
// reverse array soln 2
void reverse_array1(int i , int n,int arr[])
{

if (i >= n/2){
    return ;
}

swap(arr[i], arr[n-i-1]);
reverse_array1(i+1,n,arr);





}
// srting pallindrome
bool string_pallindrome(int i , string s)
{
 if (i >= s.size()/2){return true;}
if (s[i] != s[s.size()-i-1]) 
return false;

return string_pallindrome(i+1,s);



}
//fibonanchi sequence
int fibonanchi(int n)
{
if (n<=1) return n;

int last = fibonanchi(n-1);
int slast = fibonanchi(n-2);
return last+slast;


}

int main()

{
 int result = fibonanchi(4);
 cout<<result;

return 0;
}