#include <iostream>
using namespace std;

int main()
{

    int num1;
    int num2;
    int results;

    cout << "please input two operands" << endl;
    cin >> num1;
    cin >> num2;
    cout << "Please input an operator " << endl;
    char c;
    cin >> c;

    switch (c)
    {

    case '+':
        results = num1 + num2;
        cout << "The results is " << results << endl;
        break;

    case '-':
        results = num1 - num2;
        cout << "The results is " << results << endl;
        break;

    case '*':
        results = num1 * num2;
        cout << "The results is " << results << endl;
        break;

    case '/':
        results = num1 / num2;
        cout << "The results is " << results << endl;
        break;

    default :
        cout << "invalid operator";
    }
    return 0;
  
}