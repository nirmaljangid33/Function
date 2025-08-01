#include<iostream>
using namespace std;
string alphabetic(char ch){
   
    if(ch>'a' &&ch<='z'||ch>'A' &&ch<='Z'){
        return " Alphabetic character ";
    }
    else{
        return " spacle  apphabetic";
    }
}
int main(){
    char ch;
    cout<<"Enter the char : ";
    cin>>ch;
    cout<<alphabetic(ch);
    return 0;
}