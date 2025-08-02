#include<iostream>
using namespace std;
string vowelCon(char ch){
    if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='i'||ch=='I'||ch=='O'||ch=='u'||ch=='U'||ch=='o'){
        return "this is a vowel";
    }
    if(ch>'a' &&ch<='z'||ch>'A' &&ch<='Z'){
        return "this is a Consonant ";
    }
    else{
        return "this is a spacle  charcter";
    }
}
int main(){
    char ch;
    cout<<"Enter the char : ";
    cin>>ch;
    cout<<vowelCon(ch);
    return 0;
}