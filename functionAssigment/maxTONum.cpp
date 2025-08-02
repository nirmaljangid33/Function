#include<iostream>
using namespace std;
string maxto(int n,int b){
    if(n<b){
        return "B is maximum number ";
    }
    if(n>b){
        return "A is maximum number";
    }
    else{
        return "number is eqvel";
    }
}
int main(){
    int n,b;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the number : ";
    cin>>b;

    cout<< maxto(n,b);
    return 0;
}