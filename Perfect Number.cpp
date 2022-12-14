#include<iostream>
using namespace std;
int main(){
	int n,sum=0,r;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	for(int i=1;i<n;i++){
		r=n%i;
		if(r==0){
			sum+=i;
		}
	}
	if(sum==n){
		cout<<n<<" is a perfect number:"<<endl;
	}
	else{
		cout<<n<<" is not a perfect number: "<<endl;
	}
	return 0;
}
