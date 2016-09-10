#include<iostream>
#include<cstring>
using namespace std;

int myStrCmp(char* str1, char* str2){
  //return strlen(str);
  return myStrCmp(str1,str2);
}

int main(){
  char str1[100]="hello";
  char str2[100]="Hello";
  myStrCmp(str1,"Hello there");
  cout << myStrCmp(str1, str2);
}
