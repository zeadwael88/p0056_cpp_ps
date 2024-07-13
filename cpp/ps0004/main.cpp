#include <iostream>

using namespace std;

int main()
{
    int num  ;
    char character  ;
    cout << "Enter a number from 32 to 126 :  \n" ;
    cin >> num  ;

    if ( (float)num )
        cout <<"Invalid: a floating point number \n";
    else if (  num <32 || num > 126  )
        cout <<"Invalid: number is out of the range! \n " ;
    else  if (  num = character )
        cout <<"Invalid character/s or zero \n " ;


        cout <<"the character for " << num << " is " << character << ". \n" ;





    return 0;
}
