#include<iostream>
using namespace std;
int main(){
	int x=777;
	int &y=x;
	cout<<"The value of x is "<<x<<endl;
	cout<<y<<endl;
	float p=65.43f;
	int r=44;
	cout<<double(r)<<endl;
	cout<<int(p)<<endl;
     r=p;
	cout<<p<<endl;
	return 0;
}
