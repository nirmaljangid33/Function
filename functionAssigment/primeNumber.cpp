#include<iostream>
using namespace std;
string prime(int n){
      int isprime = true;
      for(int i=2;i<(n/2);i++){
        if(n%i==0){
            isprime=false;
        }
      }
      if(isprime == true){
        return " is prime number";
      }
      else{
        return " not a prime number ";
      }
}
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
     
   cout<<prime(n);
    return 0;
}