#include<iostream>
using namespace std;
string divisibility(int n){
    if(n%3==0&&n%5==0){
        return "number is divisibel by 5 & 3";
    }
    
    else{
        return "number is not divisibel by 5 & 3";
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<< divisibility(n);
    return 0;
}