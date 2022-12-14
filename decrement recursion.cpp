#include<iostream>
using namespace std;
 void decrement(int n){
	if(n==0){
	   return;
	}
	cout<<n<<" ";
	decrement(n-1);
}
void increment(int n){
	if(n==0){
		return;
	}
	increment(n-1);
	cout<<n<<" ";
}
int main(){
	int n;
	cin>>n;
	decrement( n);
	cout<<"|| ";
	increment( n);
	return 0;
}
