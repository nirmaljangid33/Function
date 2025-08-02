#include<iostream>
using namespace std;
string poNeZe(int n){
    if(n>0){
        return "Positive number ";
    }
    if(n<0){
        return " Negative Number ";
    }
    else{
        return "number Zero";
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<< poNeZe(n);
    return 0;
}