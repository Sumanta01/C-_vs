#include<iostream>
using namespace std;
int main(){
	int beg,end;
	cout<<"Enter the starting number: "<<endl;
	cin>>beg;
	cout<<"Enter the ending number:"<<endl;
	cin>>end;
	cout<<"The prime numbers are "<<endl;
	for(int i=beg;i<=end;i++){
		int count=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				count=1;
			}
			
		}
		if(count==0)
		cout<<i<<" ";
	}
	return 0;
}
