#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[100];
	int count;
	cout<<"Enter the string :"<<endl;
	cin>>str;
	int n=strlen(str);
	for(int i=0;i<n;i++){
		if(str[i]!=str[n-i-1]){
			count=1;
			break;
		}
	}
	if(count==0){
		cout<<"String is palindrome "<<endl;
	}
	else{
		cout<<"String is not a palindrome "<<endl;
	}
	
	return 0;
}
