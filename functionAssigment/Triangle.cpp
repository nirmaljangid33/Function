#include<iostream>
using namespace std;
int largest(int a,int b,int c){
    if(a+b>c && a+c>b && c+b>a){
       cout<<"a valid triangle";
    }
    else{
        cout<<"not a valid triangle";
    }
}

int main (){
   int a,b,c;
   cout<<"enter the three number";
   cin>>a>>b>>c;
     cout<<largest(a,b,c);
    return 0;
}

 