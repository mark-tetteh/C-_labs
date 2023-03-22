#include <iostream>
using namespace std;

enum colours {RED , YELLOW , AMBER =YELLOW , GREEN};


int main()
{

    colours arr_colors[] = {RED, YELLOW, AMBER, GREEN};

    for (int i = 0; i < 4; i++){

        cout << arr_colors[i];
    }

    return 0;
}
