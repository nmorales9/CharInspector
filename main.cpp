//Author:Nysa Morales
#include<iostream>

using namespace std;

int main()
{
    char letters;
    int ASCII;

  cout<<"What character do you want to know about?\n";
 
  cin>> letters;
  if ((letters >=65) && (letters <=90)) {

  //when user's entry is between A-Z...
  cout<<" is a upper case letter!\n";
  } else if ((letters >=97) && (letters <=122)) {

  //when user's entry is between a-z...
  cout<<" is a lower case letter!\n";
  } else {

  //in all other cases...
  cout<<"?! Pssh. What are you talking about?\n";
  }
  //no matter what they enter...
  cout<<"The ASCII value is: " << (int) letters << endl; 

  return 0;
}
