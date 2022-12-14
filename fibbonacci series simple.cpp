# include<iostream>
using namespace std;
int main(){
	int a=0,b=1;
	int c,n;
	cout<<"Enter upto which number of fibonacci series you want:"<<endl;
	cin>>n;
	cout<<"The fibonacci series is : ";
	for(int i=2;i<=n;i++){
		c=a+b;
		cout<<" "<<c;
		a=b;
		b=c;
	}
}
