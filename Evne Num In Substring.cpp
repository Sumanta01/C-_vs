#include<iostream>
#include<cstring>
using namespace std;
int EvenNumSubstring(char str[]){
	int n=strlen(str);
	int count=0,temp=0;
	for(int i=0;i<n;i++){
		 temp=str[i]-'0';
		if(temp%2==0)
			count+=(i+1);
		
		
	}
	return count;
}
int main(){
	int n;
	cout<<"Enter the size of the string: "<<endl;
	cin>>n;
	char str[n];
	cout<<"Enter the numbers in string :"<<endl;
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	cout<<"The number of even Substring is :"<<endl;
	cout<<EvenNumSubstring(str)<<endl;
	return 0;
}
