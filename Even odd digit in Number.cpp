#include<iostream>
using namespace std;
int main(){
	int n,r;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	int even=0,odd=0;
	while(n>0){
		r=n%10;
		if(r%2==0){
			even++;
		}
		else{
			odd++;
		}
		n=n/10;
	}
	cout<<"Even digit in Number: "<<even<<endl;
	cout<<"Odd digit in Number: "<<odd<<endl;
	return 0;
}
