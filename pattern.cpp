#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
ifstream f("input.txt");
int n1, n2;
int arr[]={1,2,4,3};
int x=0;
while (f>>n1>>n2){
		cout<<n1<<" ";
		n1+=arr[(x%4)];
		for(n1; n1<=n2; n1+=arr[(x%4)]){
		cout <<n1<<" ";
		x++;
}
system("pause");
return 0;
}
}
