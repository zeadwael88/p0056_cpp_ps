#include <iostream>

using namespace std;

int main()
{
    // prompting user for 2 operands and an operator 2/2
    double num1, num2, r;
    cout << " enter the two operands \n ";
    cin >> num1 >> num2 ;

    char i;
    cout << " enter the operator  + - / * % : \n" ;
    cin >> i;

    // checking user inputs and processing 1/4
    // printing the result if all data is valid 1/1
    if (i == '+' )
    {
        r = num1 + num2;
        cout << num1 << i << num2 << "=" << r << "\n";
    }
    
    else if (i == '-')
    {
        r = num1 - num2 ;
        cout << num1 << i << num2 << "=" << r << "\n";
    }
    
    
    else if (i == '/' )
    {
        if (num1 == 0 && num2 == 0)
            cout << " Infinite number of solutions: (0 / 0) is Undefined Quantity. \n";
        else if (num1 != 0 && num2 == 0)
            cout << "Math Error: cannot divide by 0.\n ";
        else
        {
            r =  num1 / num2 ;
            cout << num1 << i << num2 << "=" << r << "\n";
        }
    } // 0.25/1
    
    else if (i == '*')
    {
        r = num1 * num2 ;
        cout << num1 << i << num2 << "=" << r << "\n";
    }

    else if (i = '%')
    {
        if (num1 != (int)num1 || num2 != (int)num2)
            cout << "Cannot execute modulo operation for floating point numbers.\n";
        else
        {
            r = (int)num1 % (int)num2;
            cout << num1 << i << num2 << "=" << r << "\n";
        }
    } // 0/1
    
    else
        cout <<"Invalid character for operator \n " ; // 0.25/1
    // 0.5/1

    return 0;
}
// good work 👍 5.5/10
