#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	cout<<"Enter the integer string :"<<endl;
	cin>>str;
	sort(str.begin(),str.end(),greater<int>());
	cout<<"Greater number in the integer string : "<<str;
	return 0;
}
