#include <iostream>
#include <algorithm>
using namespace std;

int even_odd(int value); 

int main(){


    // calling the function to get the multiplication table of the even number (question 3a)
    int num;
    cout << "Enter any number :";
    cin >> num;
    even_odd(num);

}

int even_odd(int value)
    {
        if (value % 2 == 0)
        {
            for (int j = 1; j < 21; j++)
            {
                int ans = j * value;
                cout << j << " x " << value << " = " << ans << endl;
            }
        }
        else
        {
            for (int k = 1; k < 31; k++)
            {
                if (k % 3 != 0)
                {
                    cout << k << endl;
                }
            }
        }
    }