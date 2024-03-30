// //prime or not
// #include<iostream>
// using namespace std;

// int main(){
//     int i, n;
//     bool isPrime = true;
//     cout <<"Enter a positive number :";
//     cin>>n;

//     if (n==0 ||n==1)
//     {
//       isPrime = false;
//     }
//     for ( i = 2; i <n/2; ++i)
//     {
//          if (n%i==0)
//          {
//             isPrime = false;
//             break;
//          }
//     }
//     if (isPrime)
//     {
//         cout<<n<< " is  a prime number";
//     }
//     else
//     cout<<n<<"is a not prime number";
//     return 0;
// }

#include<iostream>
using namespace std;
 
 int isPrime(int n)
 {
  if (isPrime)
  {
     return 1;
  }
  else{
    return 0;
  }
  
 }
int main(){
int a;
int i;
cout<<"Enter a positive integer:"<<endl;
cin>>a;
if (a == 2 && a == 0)
{
  return 0;
}
for ( i = 2; i <= a/2; i++)
{
  if (a%i == 0)
  {
    cout<<a<< "is not a prime number"<<endl;
    break;
  }
  else
  {
    cout << a << "is a prime number"<<endl;
  }
  isPrime(a);
}
  return 0;
}
