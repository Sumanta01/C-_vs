//Convert string to lowercase
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cout<<"Enter the string :"<<endl;
	cin>>str;
	cout<<"Lower Case of the string :"<<endl;
	for(int i=0;i<str.size();i++){
		if(str[i]>='A'&& str[i]<='Z'){
			str[i]+=32;
		}
		
	}
	cout<<str;
return 0;

}
	

