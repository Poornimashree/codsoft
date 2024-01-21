#include <iostream>
using namespace std;
int main()
{
    char Operators;
    float n1, n2, result = 0;
     cout<< " Enter an Operator (+, -, *, /) : ";
    cin >> Operators;
    
    cout <<"\n Please Enter the Values for two Operands: number1 and number2  :";
   cin >> n1;
   cin >>n2;
    
    switch(Operators)
    {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;              
        case '*':
            result = n1 * n2;
            break;
        case '/':
            result = n1 / n2;
            break;
        default:
            cout <<"oops! You have entered an Invalid Operator ";                                    
    }
    
    cout << "\n ANSWER " << n1 << " " << Operators << " " << n2 << " = " << result;
    
    return 0;
}
