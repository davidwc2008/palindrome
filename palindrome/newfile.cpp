/*
David Chen
2017
Palindrome Program in C++
*/

//include libraries
//can use cstring libraries
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

//main function
int main()
{
  //declare local variables
  char str[80] = {' '};
  char str2[80] = {' '};
  char str3[80] = {' '};
  int count = 0;

  //read in input
  cin.get(str, 80);

  //get rid of non-alpha characters and make everything lowercase
  for (int i = 0; i < 80; i++){
    if (isalpha(str[i]) || isdigit(str[i])){
      str2[count]=tolower(str[i]);
      count++;
    }else if(str[i] == '\0'){
      str2[count] = '\0';
      break;
  }
  }

  //subtract one from the count
  count--;

  //store str2 backwards
  for (int i = 0; i < 80; i++){
    if (count >= 0){
     str3[i] = str2[count];
     count--;
    }else if (count < 0){
      str3[i]='\0';
      break;
    }
  }

  cout << str3 << endl;
  
  //print palindrome or not a palindrome
  if (!strcmp(str2,str3)) {
    cout << "Palindrome." << endl;
  }else{
    cout << "Not a palindrome." << endl;
  }
  
  return 0;
}
