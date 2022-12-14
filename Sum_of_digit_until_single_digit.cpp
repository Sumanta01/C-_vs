// find the sum of digit until the digit is single digit
//  Ex-> 3757=3+7+5+7=22=2+2=4
//    sum is : 4

#include<iostream>
using namespace std;
int main(){
	int n,sum;
	cout<<"Enter the digit: "<<endl;
	cin>>n;
	if(n){
	   sum=n%9==0?9:n%9;
	}
	else{
	    sum=0;
	}
	 cout<<"The sum is : "<<sum<<endl;
	 
	 return 0;
	
}
