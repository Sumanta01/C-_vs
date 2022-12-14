#include<iostream>
using namespace std;
int tileplating(int n){
	if(n==0){
		return 0;
		
	}
	if(n==1){
		return 1;
		
	}
	 return tileplating (n-1)+tileplating(n-2);
}
int main(){
	int n;
	cin>>n;
	cout<< tileplating( n);
	return 0;
	
}

