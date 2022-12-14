#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	cout<<"Enter the string :"<<endl;
	cin>>str;
	int freq[26];
	for(int i=0;i<26;i++)
	 freq[i]=0;
	for(int i=0;i<str.size();i++)
	 freq[str[i]-'a']++;
	 char ans='a';
	 int count=0;
	 for(int i=0;i<26;i++){
	 	if(freq[i]>=count){
	 		count=freq[i];
	 		ans=i+'a';
		 }
	 }
	 cout<<count<<" "<<ans<<endl;
	 return 0;
}
