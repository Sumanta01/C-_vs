#include<iostream>
using namespace std;
int factorial(int n){
	if(n==0){
	  return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int fibonacci(int n){
	if(n<2){
		return 1;
	}
	else{
		return fibonacci(n-2)+fibonacci(n-1);
	}
}
int main(){
	int a;
	cout<<"Enter the number: "<<endl;
	cin>>a;
	cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
	int f;
	cout<<"Enter the number : "<<endl;
	cin>>f;
	cout<<"The fibbonaci of "<<f<< " is:"<<fibonacci(f)<<endl;
	return 0;
}
