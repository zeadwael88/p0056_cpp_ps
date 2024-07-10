#include <iostream>

using namespace std;

int main()
{
    double num1 , num2  , r ;
    cout << " enter the two operands \n ";
    cin >> num1 >> num2 ;

    char i ;
    cout << " enter the operator  + - / * % : \n" ;
    cin >> i ;

    if (i == '+' )
    {
        r = num1 + num2 ;
    }
    else if (i == '-')
    {
        r = num1 - num2 ;
    }
    else if (i == '/' )
    {
        r =  num1 / num2 ;
    }
     else if (i == '/' , num1 =0 , num2 =0)
        cout << " Infinite number of solutions: (0 / 0) is Undefined Quantity. \n";
    else if (i == '/' , num1 > 0  , num2 =0)
        cout << "Math Error: cannot divide by 0.\n " ;
    else if (i == '*')
    {
        r = num1 * num2 ;
    }
    else if (i != '+ , - , / , *')
        cout <<"Invalid character for operator \n " ;



            cout << (num1) <<i<< (num2)<<"=" <<r<< "\n" ;















    return 0;
}
