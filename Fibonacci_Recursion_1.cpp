# include<iostream>
using namespace std;
int fib(int n){
	if(n==0)
	 return 0;
	if(n==1)
	 return 1;
	
	return fib(n-1)+fib(n-2);

}
int main(){
	int a;
	cout<<"Enter the number: "<<endl;
	cin>>a;
	int c=fib(a);
	cout<<"The fibonacci of "<<a<<" is: "<<c<<endl;
	return 0;
}
