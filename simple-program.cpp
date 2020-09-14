#include <iostream>
using namespace std;

int main()
{
    int number;
    int code = 1230182;
    cout << "Enter an integer: ";
    cin >> number;
    
    if (code == number) {
        cout << "You entered the right code!";
    } else {
        cout << "You did not used a valid code!";
    }
    return 0;
}
