#include<iostream>
using namespace std;

int main(){
    int BinNum;
    int ans = 0, rem, mul = 1;

cout <<"Enter the binary number : "<<endl;
cin>>BinNum;
    while (BinNum > 0)
    {
        rem= BinNum % 10;
        BinNum =BinNum / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout << ans <<endl;
    return 0;

}