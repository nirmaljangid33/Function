#include<iostream>
using namespace std;
int leppYear(int year){
   if((year%4==0&&year%100!=0)||year%400==0){
    cout<<year<<" is a leap year";
    return year;
   }
   else {
       cout<<year<<" not a leap year";
       return year;
   }
}
int main(){
    int year;
    cout<<"enter the three nuber :";
    cin>>year;  
    leppYear(year);
    return 0;
}