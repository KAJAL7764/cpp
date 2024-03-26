//binary to decimal 

#include<iostream>
using namespace std;

int main(){
int num;
int rem, mul = 1, ans = 0; 
cout << "Enter the input ";
cin>>num;
while (num > 0)
{
    rem = num % 2;
    //reminder
    num = num / 2;
    //num /= 2;
    //quotient
    // ans = rem * mul + ans;
    ans += rem * mul;
    //ans
    mul = mul * 10;
    //reapting until condition is wrong
}
cout << ans << endl;


return 0;
}