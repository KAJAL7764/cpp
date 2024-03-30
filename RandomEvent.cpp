#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Random event generator

    srand(time(0));
    int rannum = rand() % 5 + 1;
    switch (rannum)
    {
    case 1:
        cout << "You win a burger stickers\n";
        break;
    case 2:
        cout << " You win a t-shirt\n";
        break;
    case 3:
        cout << "You win a free lunch-box\n";
        break;
    case 4:
        cout << " You win a gft card\n";
        break;
    case 5:
        cout << " You win concert ticket\n";
        break;
    case 6:
        cout << "You wind i-phon\n";
        break;
    default:
        cout << " You lose everything\n";
        break;
    }
    return 0;
}
