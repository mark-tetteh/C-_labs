#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){

  int numbers[5];
  double mean ; 
  double sum =0;
  cout<<"Enter five integers"<<endl;

   // taking numbers from the user and putting it into an array and also calculating the sum of the numbers
  for (int i =0 ; i<5 ; i++){
    cin>>numbers[i] ;
    sum += numbers[i] ;
  }

  // Finding the mean of the five numbers 
   mean = (sum)/5 ;
   cout<<"The mean of the five numbers is "<< mean <<endl;

   
  //Finding the median of the five numbers (Q2b)
   sort(numbers,numbers+5) ;
   cout<<"The median of the number is " <<numbers[2]<<endl;


   // Finding the mode of the five numbers (Q2c)
   unordered_map<int, int> mode_count;
   for (int j = 0; j < 5; j++){
    mode_count[numbers[j]]++;
   }
   int max = 0;
   int mode = 0;
   for (auto item : mode_count) {
    if(max < item.second) {
      max = item.second;
      mode = item.first;
    }
   }
   cout << mode;
}