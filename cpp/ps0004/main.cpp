#include <iostream>

using namespace std;

int main()
{
    // prompting user for number 1/1.5
    float num;
    char character;
    cout << "Enter a number from 32 to 126 :  \n";
    cin >> num;

    // checking invalidaty of user's input 1.5/4
    // print the character 1.5/2
    if (num == 0)
        cout <<"Invalid character/s or zero \n "; // 0.25/1
    else if (num != (int)num)
        cout << "Invalid: a floating point number \n"; // 0.25/1
    else if (num < 32 || num > 126 )
        cout << "Invalid: number is out of the range! \n "; // 1/1
    else
    {
        character = (char)num;
        cout <<"the character for " << num << " is " << character << ". \n" ;
    }

    return 0;
}
// good work 👍 4.5/10
