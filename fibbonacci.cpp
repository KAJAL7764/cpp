#include<iostream> 
using namespace std;
//fibonacci series using recursion

int fibonacci(int n){
    if (n<=2)
    {
        return 1;
    }
    return fibonacci(n-2) + (n-1);
}
int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"The term of the fibonacci is: "<<fibonacci(a)<<endl;
    return 0;
}