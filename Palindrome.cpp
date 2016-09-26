#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;
/*
this program sees if you're massage is a palindrome, up to 80 characters
Josshua he

 */
int main(){
  
  char array [81] = "";
  char arrayTrimmed[81] = "";
  char arrayFlipped[81] = "";
  int j = 0;
  int k = 0;
  int numNotequal = 0; // to track number of characters that different
  cout << "Please enter your string (up to 80 characters)!" << endl;
  cin.getline (array, 80); //take the whole line and put into array

  //trim the initial input and put into another array
  for (int i = 0; i < 81; i++){
     if (((int)'a' <= (int) array[i] && (int) array[i] <= (int) 'z') || ((int) 'A' <= (int) array[i] && (int) array[i] <= (int) 'Z') || ((int) '0' <= (int) array[i] && (int) array[i] <= (int) '9')){
       arrayTrimmed[j] = array[i];
      j++;
     }
  }
  //flip trimmed aray into new array
  for (int f = j - 1; f >= 0; f--){
    arrayFlipped[k] = arrayTrimmed[f];
    k++;
    
  }
  for (int i = 0; i < j; i++){
    if (arrayTrimmed[i] == arrayFlipped[i]){
      
    }
    else{
      numNotequal++; //if any of the characters are different then add one to this
      }
  }
  if (numNotequal == 0){ // if the variable is still 0 then it is a palindrome
    cout << "Palindrome" << endl;
  }
  else {
    cout << "Not a palindrome" << endl;
  }
  /*
  cout << arrayFlipped << endl;
  arrayTrimmed[j] = '\0';
  cout << j << endl;
  cout << array << endl;
  cout << arrayTrimmed << endl;
  */
}
