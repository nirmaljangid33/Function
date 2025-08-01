#include<iostream>
using namespace std;

bool evenodd(int n){
    if(n%2==0){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int n;
    cout<<"enter the nuber : ";
    cin>>n;
    if( true ==  evenodd(n)){
        cout<<"even number ";
    }
    else {
         cout<<"odd number ";
    }

    
    return 0;
}