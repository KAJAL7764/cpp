//binary to decimal in cpp

#include<iostream>
using namespace std;

int main(){
    int BinNum;  // To store the binary number entered by the user
    int ans = 0, rem, mul = 1;  // Variables to store the decimal equivalent

       // Asking the user to enter the binary number
cout <<"Enter the binary number : "<<endl;
cin>>BinNum;
    while (BinNum > 0)
    {
        
        rem= BinNum % 10;  // Extracting the last digit of the binary number
        BinNum =BinNum / 10;  // Updating the binary number by removing the last digit
        ans = rem * mul + ans;   // Calculating the decimal equivalent
        mul = mul * 2;  // Multiplying the multiplier by 2 for the next digit
    }
    cout << ans <<endl;
    return 0;

}
