// Array search element

#include <iostream>
using namespace std;
int ArrSearch(int array[], int n, int searchKey)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == searchKey)
        {
            return 1;
        }
    }
    return 0;

}
int main()
{
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;
     cout << "Enter the number of elements in the array (up to " << MAX_SIZE << "): ";
    cin >> n;
    cout<<"Enter the elements of the array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int searchKey;
    cout<<"Enter the elements to search:"<<endl;
    cin>>searchKey;
    
    if (ArrSearch(arr, n, searchKey))
    {
        cout << "Element is founded in the array" << endl;
    }
    else
    {
        cout << "Element is not founded in the array" << endl;
    }
    return 0;
}
