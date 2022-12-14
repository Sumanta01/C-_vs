#include<iostream>
using namespace std;
int add(int n){
	if(n==0){
		return 0;
		
	}
	int prev_sum=add(n-1);
	return n+prev_sum;
}

int main(){
	int n;
	cin>>n;
	cout<<add(n)<<endl;
	return 0;
}
