#include<iostream>
using namespace std;
int main(){
    int months;
    cout <<"Enter the months numver between (1-12): ";
    cin >> months;
    switch (months)
    {
    case 1 :
        cout << "It is january";

        break;
        case 2:
        cout << "It is feb";
        break;
        case 3:
        cout <<"It is march";
        break; 
        case 4:
        cout << "It is april";
    break;
    case 5:
    cout << "It is may";
    break;
    case 6:
    cout <<"It is june";
    break;
     case 7:
     cout << "It is july";
     break; 
     case 8:
     cout <<"It is augest";
     break; 
     case 9:
     cout<< "It is sep";
     break; 
     case 10:
     cout << " It is oct";
     break; 
  case 11:
  cout <<"It is nov";
    case 12 :
    cout << "It is dec";
    break;
    
    default: 
    cout <<"Sorry, Not valid months";
        break;
    }
}