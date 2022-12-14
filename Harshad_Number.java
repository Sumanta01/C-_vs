#include<iostream>
using namespace std;
int main(){
	int n,r,sum=0;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	int temp=n;
	while(n>0){
		r=n%10;
		sum+=r;
		n=n/10;
	}
	if(temp%sum=0){
		cout<<temp<<" is a Harshad number "<<endl;
	}
	else{
		cout<<temp<<"is not a Harshad number "<<endl;
	}
	return 0;
}
