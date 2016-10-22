#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
ifstream f("input.txt");
int input1, input2;
int arr[]={1,2,4,3};
int x=0;
while (f>>input1>>input2){
		cout<<input1<<" ";
		input1+=arr[(x%4)];
		for(input1; input1<=input2; input1+=arr[(x%4)]){
		cout <<input1<<" ";
		x++;
}
system("pause");
return 0;
}
}
