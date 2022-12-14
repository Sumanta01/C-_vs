#include<iostream>
#include<string>
using namespace  std;
int main(){

	string str(5,'s');
	cout<<str<<endl;
	string str2;
	cout<<"Enter the string :"<<endl;
	getline(cin,str2);
	cout<<str2<<endl;
	return 0;
}
