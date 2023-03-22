#include <iostream>
using namespace std;


// a function to return the maximum number in a list
void max_num(int number[],int size)
{
    int max = number[0];
    for (int i = 0; i < size; i++)
    {
        if (max < number[i])
        {
            max = number[i];
        }
    }

    cout << "The maximum number is " << max << endl;
}


// a function to return if you entered a number between 10 and 20
void  get_number(int a){
    
     if( a > 10  && a < 20){
         cout << "Your number is valid" << endl;
     }
     else{
         cout << "Get a coffee" << endl;
     }
}


int main(){
 

 // a program to execute the get_num function
    int num;
    cout << "Enter a number : " << endl ;
    cin >> num;
    get_number(num);
   


  //  a program to execute the get_max function
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;

    int numbers[size];

    cout << "Enter numbers" << endl;
    for (int i = 0; i < size;i++){
        cin >> numbers[i];
    }

    max_num(numbers, size);


    return 0;
}