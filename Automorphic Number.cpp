#include<iostream>
using namespace std;
int main(){
	int n,count=1;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	int sq=n*n;
	cout<<"The square of the number is :"<<sq<<endl;
	int temp=n;
	while(n>0){
		count=count*10;
		n=n/10;
	}
	if(sq%count==temp){
		cout<<temp<<" is an Automorphic number:"<<endl;
	}
	else{
		cout<<temp<<" is not an Automorphic number:"<<endl;
	}
	return 0;
}
