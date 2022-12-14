#include<iostream>
#include<string>
using namespace std;
int main(){
	int i;
	string str;
	cout<<"Enter the String:"<<endl;
	cin>>str;
	cout<<"The reverse of the string: ";
	for(int i=str.length()-1;i>=0;i--){
		cout<<str[i];
		
	}
	return 0;
}
