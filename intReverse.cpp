#include<iostream>
using namespace std;

int main(){

int Ans = 0, rem, n;
int mul = 1;

cout <<"Enter the Input : " <<endl;
cin>>n;

while (n > 0)
{
    rem = n % 10;
    n /= 10;
    Ans = rem * mul + Ans;
     mul = mul * 2;
}
cout << Ans

    return 0;
}