#include <iostream>
using namespace std;
int sumOfdigits(int);
int main()
{
    int a;
    cout<<"Enter the number :";
    cin>>a;
    cout <<"sum = "<<sumOfdigits(a);
    return 0;
}


int  sumOfdigits(int num)
{
    int digSum = 0, lastDig;
    while (num > 0)
    {
        lastDig = num % 10;
        num = num / 10;
        digSum += lastDig;
    }
        return digSum;
}