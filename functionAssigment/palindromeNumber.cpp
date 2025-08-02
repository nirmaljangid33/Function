#include <iostream>
using namespace std;
int palidrom(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int rev;
        rev = n % 10;
        sum = sum * 10 + rev;
        n = n / 10;
    }
return sum;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if(palidrom(n) == n){
        cout<<"palidrom number ";
    }
     else{
         cout<<" not palidrom number ";
     }
    return 0;
}