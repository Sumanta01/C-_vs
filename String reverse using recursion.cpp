#include<iostream>
using namespace std;
 void reverse(string str){
	if(str.length()==0){
	  return;
	}
  string rest_str=str.substr(1);
   reverse(rest_str);
   cout<<str[0];
   
}
int main(){
	 string str;
	cout<<"Enter the string :"<<endl;
	cin>>str;
	cout<<"Reverse of the string is :  ";
	reverse(str);
	return 0;
	
}
