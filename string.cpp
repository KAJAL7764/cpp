#include<iostream>
//  string
using namespace std;
int main(){
    string name;
    cout<< "Enter your name, please : ";
    getline(cin, name);
    if (name.length()>12){
     cout<<"Please enter the name between (1-12char)" <<endl;
    }
    else{
        cout << "Welcome! " << name << endl;
    }
    if (name.empty()){
        cout<<"Sorry, you did't enter your name";
    }
    else{
        cout<< "Hello, " <<name;
        }
        name.erase(3,2); // erase
        cout<<name << endl;
       name.clear();      // clear
       cout << "Hey," << name << endl;
       //append
       name.append("kajal814900@gmail.com");
       cout<< "Enter your username " << name;  
}



























// #include<iostream>
// //  string
// using namespace std;
// int main(){
//     string name;
//     cout<< "Enter your name, please : ";
//     getline(cin, name);
//     if (name.length()>12){
//      cout<<"Please enter the name between (1-12char)" <<endl;
//     }
//     else{
//         cout << "Welcome! " << name << endl;
//     }
//     if (name.empty()){
//         cout<<"Sorry, you did't enter your name";
//     }
//     else{
//         cout<< "Hello, " <<name;
//         }
//         name.erase(3,2); // erase
//         cout<<name << endl;
//        name.clear();      // clear
//        cout << "Hey," << name << endl;
//        //append
//        name.append("kajal814900@gmail.com");
//        cout<< "Enter your username " << name;
        
// }