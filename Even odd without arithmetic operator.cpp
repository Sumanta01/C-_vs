#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	(n&1)?cout<<"Odd":cout<<"Even";
	return 0;
}
