#include<iostream>
using namespace std;
void largest(int n,int r,int t){
    if(n>r && n>t){
        cout<<n<<"is a largest";
    }
     if(r>n && r>t){
        cout<<r<<"is a largest";
    } if(t>n && t>r){
        cout<<t<<"is a largest";
    }
}
int main(){
    int n,r,t;
    cout<<"enter the three nuber :";
    cin>>n>>r>>t;
     
    largest(n,r,t);
    return 0;
}