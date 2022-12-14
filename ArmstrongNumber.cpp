#include<iostream>
using namespace std;
int main(){
	int n,r,sum=0;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	int temp=n;
	while(n>0){
		r=n%10;
		sum+=r*r*r;
		n=n/10;	
	}
	if(sum==temp){
		cout<<temp <<" is an Armstrong number:"<<endl;
	}
	else{
		cout<<temp <<" is not an Armstrong number:"<<endl;
	}
	return 0;
}
