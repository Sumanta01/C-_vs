#include<iostream>
using namespace std;
string remove_all_x(string str){
	if(str.length()==0){
		return "";
	}
	char ch=str[0];
	string ans=remove_all_x(str.substr(1));
	if(ch=='x'){
		return ans+ch;
	}
	return ch+ans;
}
int main(){
	string str;
	cout<<"Enter the string :"<<endl;
	cin>>str;
	
	cout<<remove_all_x(str);
	return 0;
}
