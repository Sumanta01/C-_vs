#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cout<<"Enter the  string:"<<endl;
	getline(cin,str);
	int freq[26]={0};
	for(int i=0;i<str[i]!=0;i++){
		freq[str[i]]++;
	}
	for(int i=0;i<26;i++){
		if(freq[i]!=0){
			cout<<"The frequency of character "<<i<<"is "<<freq[i]<<endl;
		}
	}
	return 0;
	
}

