//convert string to uppercase
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	cout<<"Enter the string :"<<endl;
	cin>>str;
	cout<<"Upper case of the sring "<<endl;
	for(int i=0;i<str.size();i++){
		if(str[i]>='a' && str[i]<='z'){
			str[i]-=32;
		}
		
	}
	cout<<str;
	return 0;
}
