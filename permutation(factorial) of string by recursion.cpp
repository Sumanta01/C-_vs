#include<iostream>
using namespace std;
void permutation(string str,string empty){
	if(str.length()==0){
		cout<<empty<<endl;
		return;
	}
	for(int i=0;i<str.length();i++){
		char ch=str[i];
		string ros=str.substr(0,i)+str.substr(i+1);
		permutation(ros,empty+ch);
		
	}
}
int main(){
	string str;
	cout<<"Enter the string: "<<endl;
	cin>>str;
	cout<<"----------------------------------"<<endl;
	
    permutation(str,"");
    
	return 0;
	
}
