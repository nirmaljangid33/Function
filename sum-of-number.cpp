#include<iostream>
using namespace std;
int Number (int n){
    int sum=0;
     for(int i=1;i<=n;i++){
        sum +=i;
     }
     return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<"Enter the number";
     cout<<"sum of n number"<<Number(n);
}