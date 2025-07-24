#include<iostream>
using namespace std;
  int sum (int a,int b);
int main(){
     int a,b;
    cin>>a>>b;
   cout<< sum(a,b);
}
int sum(int a,int b){
   int sum;
    sum =a+b;
    return sum;
} 
