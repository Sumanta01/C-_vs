#include<iostream>
using namespace std;
int c=34;
int main(){
	int num1,num2;
	cout<<"Enter the value of num1:\n";
	cin>>num1;
	cout<<"Enter the value of num2:\n";
	cin>>num2;
	int c=num1+num2;
	cout<<"The sum is: "<<c<<endl;
	cout<<"The global variable value of c is : "<<::c;
	
}
