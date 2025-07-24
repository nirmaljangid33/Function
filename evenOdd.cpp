#include<iostream>
using namespace std;

string evenOdd(int n){
    if(n%2==0){
        return "even number";
    }
    else {
        return " odd number ";
    }
}
int main(){
  int n;
  cout<<"enter the number : ";
  cin>>n;
  cout<<evenOdd(n);
  return 0;
}