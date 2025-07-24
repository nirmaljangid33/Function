#include<iostream>
using namespace std;
int largest(int a,int b,int c){
    if(a>b&& a>c){
        return a;
    }
    if(b>a&& b>c){
        return b;
    }
    if(c>a&& c>b){
        return c;
    }
}

int main (){
   int a=10,b=20,c=30;
     cout<<"largest number : "<<largest(a,b,c);
    return 0;
}

 