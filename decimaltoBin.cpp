//binary to decimal 

//Logic: Convert decimal to binary by continuously dividing by 2, appending remainders as digits, and updating multiplier.
#include<iostream>
using namespace std;

int main(){
int num;
int rem, mul = 1, ans = 0; 
cout << "Enter the input ";
cin>>num;
while (num > 0)  
    // Converting decimal to binary
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
