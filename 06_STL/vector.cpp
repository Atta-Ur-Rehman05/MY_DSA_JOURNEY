#include <iostream>
#include<vector>
using namespace std;

int main()
{
vector<int> vec(1);

vec.push_back(5);
vec.push_back(6);
vector<int> vec2(vec);
cout << "size: "<<vec.size()<<endl;
for (auto val : vec)
{
cout << val <<endl;


}
// ...existing code...
cout << "vect 2 : " << endl;
for (auto v : vec2) {
    cout << v << " ";
}
cout << endl;
// ...existing code...


return 0 ;
}
