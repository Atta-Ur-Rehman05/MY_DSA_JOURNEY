#include<iostream>
using namespace std;


// print ractangle of *
void printRactangle(int n){

for(int i = 0 ; i < n; i++){
    for(int j = 0 ; j < n; j++){
        cout<< "*";
    }
    cout<< endl;
}
}

void shape2(int n ){
for(int i = 1 ; i<=n; i++){
    for(int j = 1 ; j<=i; j++){
        cout<<'*';
    }
    cout<<endl;
}


}

void shape3(int n){

    for(int i = 1; i<=n; i++){
        for(int j = 1 ; j<=i; j++){
            cout<< j ;
        }
        cout<< endl;
    }
}

void shape4(int n){
    
    for(int i = 1; i<=n; i++){
        for(int j = 1 ; j<=i; j++){
            cout<< i ;
        }
        cout<< endl;
    }
}

void shape5(int n){
    
    for(int i = 1; i<=n; i++){
        for(int j = 1 ; j<= n-i+1; j++){
            cout<< '*';
        }
        cout<< endl;
    }
}

void shape6(int n){
    
    for(int i = 1; i<=n; i++){
        for(int j = 1 ; j<= n-i+1; j++){
            cout<< j;
        }
        cout<< endl;
    }
}

void shape7(int n){
    
    for(int i = 0; i<n; i++){
        for(int j = 0 ; j< n-i-1; j++){
            cout<< ' ';
        }

        for(int j = 0 ; j< 2*i+1; j++){
            cout<< '*';
        }

        for(int j = 0 ; j< n-i-1; j++){
            cout<< ' ';
        }
        cout<< endl;
    }
}



int main(){
 shape7(5);







    return 0;
}