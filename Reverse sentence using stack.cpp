#include<iostream>
#include<stack>
#include<string>
using namespace std;
void ReverseSentence(string str){
	stack<string>st;
	for(int i=0;i<str.length();i++){
		string rev="";
	
	   while(str[i]!=' ' && i<str.length()){
		rev+=str[i];
		i++;
	}
	st.push(rev);
}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}cout<<endl;
}
int main(){
	string str;
	cout<<"Enter the sentence : "<<endl;
	getline(cin,str);
	cout<<"After reverse the sentence "<<endl;
  	ReverseSentence(str);
  	
	
	return 0;
}
