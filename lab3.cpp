#include<iostream>
#include<cstring>
using namespace std;

int myStrCmp(char* str1, char* str2){
  //return strlen(str);
  switch (strcmp(str1,str2)){
  
     case-1:
    	cout<<"negative";
	 break;
	 case 0:
	    cout<<"equal";
     break;
     case 1:
     	cout<<"positive";
     break;
 };
}
void myStrcpy(char* str1, char* str2){
	strcpy(str1, str2);
}
void myStrcat(char* str1, char* str2){
	strcat(str1, str2);

int main(){
  char str1[100]="Hello";
  char str2[100]="hello";
 // myStrCmp(str1,"Hello there");
  //cout << myStrCmp(str1, str2);

myStrCmp(str1, str2);
myStrcpy(str1, str2);
myStrcat(str1, str2);
cout<<str1;
}
