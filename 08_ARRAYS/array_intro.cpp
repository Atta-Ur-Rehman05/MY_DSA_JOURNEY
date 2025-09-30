/*array is data structure that contain similar things in contigous memory 
element may be 
char
int
string
pair etc 

*/
#include<iostream>
using namespace std ;

int main()
{
// declaration of array

// type name [size];

int integer [5];

// initilize array

int num[] = {2,5,4,6};

// access to array element through indexing 

cout << num[0];
cout << num[1];
cout << num[2];
cout << num[3];
cout << num[4];


// access array element through loop

for(int i = 0 ; i<4; i++)
{

cout<< num[i];

}
return 0 ;
}