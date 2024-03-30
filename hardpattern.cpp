#include <iostream>
using namespace std;
int main()
{
    // int row, col;
    // int n;
    // cout << "Input the number:-"<<endl;
    // cin>>n;
    // for (row = 1; row <= n; row++)
    // {
    //     for (col = 1; col <= n - row; col++)
    //     {
    //         cout <<"  ";
    //     }
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout << row <<" ";
    //     }

    //     cout << endl;
    // }
    //ex 2. 
    // int row, col;
    // int n;
    // cout << "Input the number:-"<<endl;
    // cin>>n;
    // for (row = 1; row <= n; row++)
    // {
    //     for (col = 1; col <= n - row; col++)
    //     {
    //         cout <<" ";
    //     }
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    //ex 3.
    //  int row, col;
    // int n;
    // cout << "Input the number:-"<<endl;
    // cin>>n;
    // for (row = 1; row <= n; row++)
    // {
    //     for (col = 1; col <= n - row; col++)
    //     {
    //         cout <<"  ";
    //     }
    //     for (col = 1; col <= row + 1; col++)
    //     {
    //         cout << col <<" ";
    //     }

    //     cout << endl;
    // }

    // //ex 4.
    //   int row, col;
    // int n;
    // char name = 'A' + (row - 1);
    // cout << "Input the number:-"<<endl;
    // cin>>n;
    // for (row = 1; row <= n; row++)
    // {
    //     for (col = 1; col <= n - row; col++)
    //     {
    //         cout <<"  ";
    //     }
    //     for (name = 'A'; name <= 'A' + row - 1; name++)
    //     {
    //         cout << name <<" ";
    //     }
    //     cout << endl;
    // }
       //ex 5.
      int row, col;
    int n;
    cout << "Input the number:-"<<endl;
    cin>>n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout <<"  ";
        }
        for (col = 2; col <= row  + 1; col++)
        {
            cout << row <<" ";
        }
        cout << endl;
    }
    return 0;
}