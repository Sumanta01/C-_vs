#include<iostream>
using namespace std;
int func(int a ,int b){
	int temp;
	while(b){
		temp=a%b;
		a=b;
		b=temp;
	}
	return a;
}
int main(){
	int a=10,b=6;
	cout<<func(10,6);
	return 0;
	
}
